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
 * @file userctrl.h
 * @author Andreas HABEGGER
 * @date 26 Jan 2016
 * @brief  Interface of user control module
 * This module acts as user control module for simple CLI applications.
 *
 * @see http://linux.bfh.ch/
 * @bug currently no bugs
 * @todo no open tasks
 */

#ifndef USERCTRL_H
#define USERCTRL_H

#include <stdio.h>
#include "helper.h"

typedef struct {
  unsigned int code; /**< Code symbol of a menu entry */
  char *desc;        /**< Corresponding menu entry description */
} OptionEntry;


typedef struct {
  const OptionEntry *entries;
  const char *header;
  unsigned int numOfEntries;
} OptionMenu;

unsigned int getSel(const OptionMenu *menu);

void displayMenu(const OptionMenu *menu);

void displayChoise(const OptionMenu *menu, unsigned int help);

unsigned int getFirstEntry(const OptionMenu *menu);

unsigned int getLastEntry(const OptionMenu *menu);

#endif // USERCTRL_H
