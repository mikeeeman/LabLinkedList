# Description - Linked List Example

**Company**
 :  Bern University of Applied Sciences

**Purpose**
 :  This file contains the exercise description of the software "Linked List Example".

The application is an exercise of course BTF2231 (C programming course). The file is written in Markdown. Open it up in a browser like Google Chromium or Mozilla Firefox (with Markdown Preview Add-On installed).

**Author**
 :  Andreas HABEGGER <andreas.habegger@bfh.ch>

**Date**
 :  28.02.2016

___
Exercise Description
---
Create a test application that uses linked list (unidirectional linked and not circular). Use the snipped which consists a simple program ctrl menu. Fill in missing code in **linkedlistctrl.c**. The following functionality must be implemented:
  - Add new node to the list
  - New added nodes are filled in alphabetically in order
  - Display list in order
  - Display list in reverse order
  - Free list
  - Remove a specific node

To improve your C skills it is a good idea to analyze the given snipped first. In main program ctrl (switch-case) are some input data validation and buffer flushing methods used. A good idea is to notify user if he/she wands delete a node or display a list if list is empty.
___
Structure of Directory
---
### doc/

This folder contains documentation files. The files are most likely in PDF format.

### src/

This folder contains source code files. Because it is a C programming exercise the source files contain appropriate syntax.

___

Get Started
---
First of all read the documents in **doc** directory if there are any. The documentations gives you an idea what this application is about. Next, go on with compiling it. To do so there you have several options. Read the list below to get the most suitable for you.

1. Compile it on CLI by using gcc (on other systems than Linux follow a tutorial to get GCC up and running)
 - Open CLI and change into the project directory
 - create a work directory called "_sandbox".  The underline is due to an exclude pattern in the ".gitignore" file
 
```bash
mkdir _sandbox
cd _sandbox
export SRC="../src"
```
 - Compile the source step by step.
 
```bash
gcc -L $SRC -I $SRC -o linkedListApp $SRC/*.c
```
 - Run the application
 
```bash
./linkedListApp
```
2. Use a make project
 - Follow the Make tutorial of BTF1230
 - Copy the Makefile from tutorial into the current directory
 - Adapt global settings in the Makefile to fit to current project
 - run make to start compilation process
 
```bash
make clean all
```
 - Run the application
 
```bash
./linkedListApp
``` 
3. Use an IDE (Integrated Development Environment)
  - Download QT creator http://www.qt.io/download-open-source/
  - Open the *.pro file
    - In qtcreator IDE [ctrl]+O
    - On CLI run the command
    
```bash
qtcreator linkedListApp.pro
```    
  - Walk through the user specific configuration process (there you will add a build kit)
  - Hit [ctrl]+B to build the application
  - Hit [ctrl]+R to run the application
___






