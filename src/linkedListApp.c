/****************************************************************************
 * Copyright (C) 2016 by Andreas Habegger                                   *
 *                                                                          *
 * This file is part of Linked List Example  - BTF2231                      *
 *                                                                          *
 *   TMA is free software: you can redistribute it and/or modify it         *
 *   under the terms of the GNU Lesser General Public License as published  *
 *   by the Free Software Foundation, either version 3 of the License, or   *
 *   (at your option) any later version.                                    *
 *                                                                          *
 *   LLE is distributed in the hope that it will be useful, to students     *
 *   following the course BTF2231 at Bern University but WITHOUT ANY        *
 *   WARRANTY. See the GNU Lesser General Public License for more details.  *
 *                                                                          *
 *   You should have received a copy of the GNU Lesser General Public       *
 *   License along with TMA.  If not, see <http://www.gnu.org/licenses/>.   *
 ****************************************************************************/

/**
 * @file userctrl.c
 * @author Andreas HABEGGER
 * @date 26 Jan 2016
 * @brief In this file are all function descriptions (public and privat)
 * The public declared functions in coresponding header file are defined here. Additionally
 * are private (static) functions declared and described here.
 *
 * @see http://linux.bfh.ch/
 * @bug currently no bugs
 * @todo add entire LLE functionality - see TODO below for more detail
 */
#include <stdio.h>
#include <string.h>
#include "helper.h"
#include "userctrl.h"


const OptionEntry menuEntries[] = {
  { 0 , "Display \"Control Menu\""},
  { 1 , "Add list node (alpha sort)"},
  { 2 , "Delete list node"},
  { 3 , "Display list (in order)"},
  { 4 , "Display list (reverse)"},
  { 5 , "Display list assembly"},
  { 6 , "Free list"},
  { 10, "Exit program"}
};


int main(void)
{
  OptionMenu userMenu;

  LISTPTR list = NULL;
  char data[LENGHT];

  userMenu.entries = menuEntries;
  userMenu.header = "Linked List -- Example";
  userMenu.numOfEntries = sizeof(menuEntries)/sizeof(OptionEntry);

  bool isEnable = true;
  bool menuPrinted = false;

  displayMenu(&userMenu);

  while(isEnable){
    switch(getSel(&userMenu)){
      case 1:
        printf("Type a name and confirm by [ENTER] <max %u>: ", (LENGHT-1) );
        fgets(data, LENGHT, stdin);
        if(strlen(data) == LENGHT-1) flushStdin();
        strtok(data, "\n");
        list = addNode(data, list);
        break;
      case 2:
        if(list == NULL)
          puts("List is empty !!");
        else
        {
          printf("Type a name to remove from list confirm by [ENTER] <max %u>: ", (LENGHT-1) );
          fgets(data, LENGHT, stdin);
          strtok(data, "\n");
          if(deleteNode(data, list) == NULL)
            printf("\nNo node with data \"%s\" found in list\n", data);
        }
        break;
      case 3:
        if(list == NULL)
          puts("List is empty !!");
        else
          printList(list);
        break;
      case 4:
        if(list == NULL)
          puts("List is empty !!");
        else
          printListReverse(list);
        break;
      case 5:
        if(list == NULL)
          puts("List is empty !!");
        else
          printListAssembly(list);
        break;
      case 6:
        list = freeList(list);
        break;
      case 10:
        list = freeList(list);
        isEnable = false;
        break;
      default:
        displayMenu(&userMenu);
        menuPrinted = true;
        break;
    }
    if(isEnable && !menuPrinted)
      displayChoise(&userMenu, 0);
    else
      menuPrinted = !menuPrinted;
  }
  return 0;
}
