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
