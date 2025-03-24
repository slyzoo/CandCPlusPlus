# Installation

## Download
Download the [C/C++ compiler](https://www.msys2.org/)

## Running
Run the program and install it. then copy and paste this command into the terminal
```
pacman -S mingw-w64-ucrt-x86_64-gcc
```
afterwards check to see if it downloaded correctly using this command
```
gcc --version
```
if it works you'll see `gcc.exe (Rev2, Built by MSYS2 project) 13.2.0` or some other version number

## Addons
Download the Visual Studio Code addons [C/C++ Extention Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack).
It comes with 
- Debugger
- Intellisense
- Cmake
- Themes

> [!NOTE]
> this next part is optional, but is recomended to new users

Download [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) to run your code faster and easier