# redBus Ticketing System
A console-based ticketing application written in C++ for booking intercity bus tickets and viewing routes.
## How to Compile and Run
### Option 1: Using Code::Blocks (Recommended)
1. **Create an Empty Project**:
   - Open Code::Blocks.
   - Go to **File ➔ New ➔ Project...**
   - Choose **Empty project** and click **Go**.
   - Set **Project title** to `redBus` and **Folder to create project in** to this repository's directory.
   - Click **Next** and **Finish**.
2. **Add Source Files**:
   - In the **Management** pane, right-click on the `redBus` project name.
   - Select **Add files recursively...**
   - Choose the project directory and click **OK**.
   - Make sure all `.cpp` and `.h` files are checked, and click **OK**.
3. **Enable C++11 Support**:
   - Go to **Settings ➔ Compiler...**
   - Under the **Compiler flags** tab, scroll down and check the box for:
     `Have g++ follow the C++11 ISO C++ language standard [-std=c++11]`
   - Click **OK**.
4. **Build and Run**:
   - Press **F9** (or go to **Build ➔ Build and run**).
---
### Option 2: Using Command Line (PowerShell/Command Prompt)
If you have MinGW installed, you can compile it directly from your terminal:
1. Open **PowerShell** in the project directory.
2. If your compiler is not in your system path, temporarily add it (e.g. for Code::Blocks MinGW):
   ```powershell
   $env:Path = "C:\Program Files (x86)\CodeBlocks\MinGW\bin;" + $env:Path
   ```
3. Compile the code using the C++11 flag:
   ```powershell
   g++ -std=c++11 -o redBus.exe main.cpp Logic.cpp Routes.cpp UI.cpp Validation.cpp
   ```
4. Run the executable:
   ```powershell
   .\redBus.exe
   ```
