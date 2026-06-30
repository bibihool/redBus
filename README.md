# redBus
Here is a step-by-step guide to setting up, compiling, and running this project from scratch using the Code::Blocks IDE:

Step 1: Create a Project in Code::Blocks
Open Code::Blocks.
Go to the top menu and select File ➔ New ➔ Project...
Select Empty project and click Go.
In the wizard, fill in the details:
Project title: redBus
Folder to create project in: C:\Users\User\Downloads\redBus-main (the existing project folder).
Click Next, then click Finish (keep the default compiler settings).
Step 2: Add the Source Files to the Project
Since the files already exist in the folder, you need to add them to your project workspace:

In the Management pane on the left, right-click on your project name (redBus).
Select Add files recursively...
Select the C:\Users\User\Downloads\redBus-main directory and click OK.
In the dialog that pops up, ensure all the following files are checked:
Source files: 
main.cpp
, 
Logic.cpp
, 
Routes.cpp
, 
UI.cpp
, 
Validation.cpp
Header files: 
BusRoute.h
, 
Logic.h
, 
Routes.h
, 
UI.h
, 
Validation.h
Click OK.
Step 3: Enable the C++11 Compiler Flag (Required)
The project uses modern C++ features (like range-based for loops and initializer lists) which require the C++11 standard or newer to compile:

Go to the top menu and select Settings ➔ Compiler...
Ensure Compiler settings tab ➔ Compiler Flags sub-tab is open.
Scroll down and check the box for: Have g++ follow the C++11 ISO C++ language standard [-std=c++11] (Alternatively, you can choose C++14 or C++17 if your compiler version supports them).
Click OK to save the settings.
