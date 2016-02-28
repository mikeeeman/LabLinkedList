/****************************************************************************
 * Copyright (C) 2016 by Andreas Habegger                                   *
 *                                                                          *
 * This file is part of Student Management System (SMS) - BTF1230           *
 *                                                                          *
 *   TMA is free software: you can redistribute it and/or modify it         *
 *   under the terms of the GNU Lesser General Public License as published  *
 *   by the Free Software Foundation, either version 3 of the License, or   *
 *   (at your option) any later version.                                    *
 *                                                                          *
 *   SMS is distributed in the hope that it will be useful, to students     *
 *   following the course BTF1230 at Bern University but WITHOUT ANY        *
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
 * @todo no open tasks
 */

#include "userctrl.h"


/*
 * Private function declarations
 */

static unsigned int isValid(const OptionEntry dialogue[], const unsigned int *numOfOptions, unsigned int selection);

/*
 * Public function definitions
 */

unsigned int getFirstEntry(const OptionMenu *menu)
{
  return menu->entries[0].code;
}

unsigned int getLastEntry(const OptionMenu *menu)
{
  return menu->entries[menu->numOfEntries-1].code;
}

void displayMenu(const OptionMenu *menu)
{
  unsigned int index;

  puts("*******************************************************************************");
  printf("** \t\t%s \n",menu->header);
  puts("*******************************************************************************\n");

  puts("Select one of the available options");
  for(index=0; index < menu->numOfEntries; index++)
    printf("%3.1u : %s\n", menu->entries[index].code, menu->entries[index].desc);

  printf("\nWhat is your choise [%u - %u] : ",menu->entries[0].code, menu->entries[menu->numOfEntries-1].code);
}

void displayChoise(const OptionMenu *menu, unsigned int help)
{

  printf("\nType %u for help dialogue : ",help);
  printf("\nWhat is your choise [%u - %u] : ",menu->entries[0].code, menu->entries[menu->numOfEntries-1].code);
}

unsigned int getSel(const OptionMenu *menu)
{
  unsigned int selection = 0;

  scanf("%u",&selection);
  flushStdin();

  while( !isValid(menu->entries, &(menu->numOfEntries),selection) )
    {
      puts("Selection not valid. Try again :");
      scanf("%u",&selection);
      flushStdin();
    }

  return selection;
}

/*
 * Private function definitions
 */

static unsigned int isValid(const OptionEntry dialogue[], const unsigned int *numOfOptions, unsigned int selection)
{
  unsigned int index;

  for(index = 0; index < *numOfOptions; index++)
    {
       if(dialogue[index].code == selection)
         return 1;
    }
  return 0;
}
