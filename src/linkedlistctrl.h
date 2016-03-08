/****************************************************************************
 * Copyright (C) 2016 by hga3                                               *
 *                                                                          *
 * This linkedlistctrl is part of linkedListApp                             *
 *                                                                          *
 *   It is free software: you can redistribute it and/or modify it          *
 *   under the terms of the GNU Lesser General Public License as published  *
 *   by the Free Software Foundation, either version 3 of the License, or   *
 *  (at your option) any later version.                                     *
 *                                                                          *
 *   linkedlistctrl is distributed in the hope that it will be useful, to   *
 *   students following a software development course Bern University of    *
 *   Applied Sciences - (BFH) but WITHOUT ANY WARRANTY.                     *
 *   See the GNU Lesser General Public License for more details.            *
 *                                                                          *
 *   You should have received a copy of the GNU Lesser General Public       *
 *   License along with linkedListApp.                                      *
 *   If not, see <http://www.gnu.org/licenses/>.                            *
 ****************************************************************************/

#ifndef LINKEDLISTCTRL_H
#define LINKEDLISTCTRL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "helper.h"

#ifndef NULL
  #define NULL 0
#endif

#ifndef LENGHT
  #define LENGHT 20
#endif

/* List data structure */
struct node
{
  char name[LENGHT];
  struct node *next;
};

/* Typedefs for the structure and pointer. */
typedef struct node LIST;
typedef LIST *LISTPTR;


LISTPTR addNode(const char *string, LISTPTR head);

LISTPTR deleteNode(const char *string, LISTPTR head);

LISTPTR freeList(LISTPTR head);

void printList(LISTPTR head);

void printListReverse(LISTPTR head);

void printListAssembly(LISTPTR head);


#endif // LINKEDLISTCTRL_H
