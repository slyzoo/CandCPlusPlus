# C & C++ for windows

# installation
## Downloads
Download the [C/C++ compiler](https://www.msys2.org/) and [Visual Studio Code](https://code.visualstudio.com/download)

## Installing Msys2
Run the program follow the wizard to install it. After that copy and paste this command into the terminal.
```
pacman -S mingw-w64-ucrt-x86_64-gcc
```
afterwards check to see if it downloaded correctly using this command.
```
gcc --version
```
If it works you'll see `gcc.exe (Rev2, Built by MSYS2 project) 13.2.0`

> [!TIP]
> Version numbers will vary

## Installing Visual Studio Code
Run the Visual Studio Code.exe.\
when it asks for `select additional tasks` check all the boxes.

- [x] Create a desktop icon
- [x] Add "Open with Code action to Windows Explorer file context menu
- [x] Add "Open with Code action to Windows Explorer directory context menu
- [x] Register Code as an editor for supported file types
- [x] Add to PATH

Finish the installation.

### Addons
Download the Visual Studio Code addons [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack).
It comes with 
- Debugger
- Intellisense
- Cmake
- Themes

> [!NOTE]
> This next part is optional, but is recommended to new users.

Download [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) to run your code faster and easier

## Compiling

### compiling from Command Line
Copy and paste this command to compile
```
gcc hello-world.c
```
> [!NOTE]
> Spaces do not work with file names when compiling from command line.\
> File names will vary.

Then to run the file type the name of the .exe you made.
```
a.exe
```

### compiling from Code Runner
press the triangle in the corner of your screen, and it compiles and runs.


# list of what the tutorial covers

> [!WARNING]
> This tutorial does NOT cover algorithms or how to write clean code
1. comments
1. hello world
1. variables
1. data types
1. constants
1. escape sequences
1. format specifiers
1. variable scope
1. type conversion
1. namespaces
1. typedefs
1. arithmatic
1. user input
1. beep
1. math functions
1. circumfrence calculator
1. area calculator
1. hypotenuse calculator
1. if statements
1. switch cases
1. temperature conversion
1. console calculator
1. logical operators
1. user defined functions
1. arguments
1. return
1. ternary
1. function prototypes
1. functions with variables
1. function templates
1. string functions
1. for loops
1. while loops
1. do while loops
1. for each loop
1. nested loops
1. break and continue
1. arrays
1. size of
1. rows and columns
1. iterate over an array
1. printing arrays with loops
1. 2d arrays
1. search array for element
1. arrays with strings
1. swapping 2 varibles values
1. sorting arrays
1. pass array to function
1. fill function
1. fill an array with user input
1. multidimensional arrays
1. structs
1. arrays of structs
1. pass structs as arguments
1. enums
1. random numbers
1. random number generator
1. random event generator
1. min max generator
1. number guessing game
1. quiz game
1. bitwise operators
1. memory addresses
1. pass by value Vs pass by reference
1. constant params
1. pointers
1. null pointers
1. dynamic memory
1. recursion
1. writing files
1. reading files
1. tic tac toe (noughts and crosses)
1. rock paper scissors game
1. banking practice system
1. credit card vailidator
1. Object Orented Programming
1. contstructors
1. constructors overloading
1. getters and setters
1. inheritance
1. polymorphism
1. static libraries
1. dynamic libraries
1. multithreading