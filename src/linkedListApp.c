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
#include "helper.h"
#include "userctrl.h"


static OptionEntry menuEntries[] = {
                 { 0 , "Display \"Control Menu\""},
                 { 1 , "Add list node at head"},
                 { 2 , "Add list node at tail"},
                 { 3 , "Add list node at position"},
                 { 4 , "Display linked list"},
                 { 5 , "Delete first list node"},
                 { 6 , "Delete last list node"},
                 { 7 , "Delete list node at position"},
                 { 8 , "Sort nodes alphabetically in order"},
                 { 9 , "Sort nodes alphabetically in reverse order"},
                 { 10 ,"Free list"},
                 { 11 ,"Exit program"}
                };


int main(void)
{
  OptionMenu userMenu;

  userMenu.entries = menuEntries;
  userMenu.header = "Linked List -- Example";
  userMenu.numOfEntries = sizeof(menuEntries)/sizeof(OptionEntry);

  bool isEnable = true;
  bool menuPrinted = false;

  displayMenu(&userMenu);

  while(isEnable){
      switch(getSel(&userMenu)){
        case 1:
          // TODO : Add node at head
          break;
        case 2:
          // TODO : Add node at tail
          break;
        case 3:
          // TODO : Add node at position
          break;
        case 4:
          // TODO : Display Linked List
          break;
        case 5:
          // TODO : Delete first list node
          break;
        case 6:
          // TODO : Delete last list node
          break;
        case 7:
          // TODO : Delete list node at position
          break;
        case 8:
          // TODO : Sort alpha in order
          break;
        case 9:
          // TODO : Sort alpha in reverse order
          break;
        case 10:
          // TODO : Free List
          break;
        case 11:
          // TODO : Free List and exit program
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
