# C & C++ for windows

# Table of Contents

0. [Installation](#installation)
1. comments
2. hello world

## compilation
3. compile from command line
4. compile from code runner

## data types
5. data types
6. escape sequences
7. variables
8. variable scope
9. format specifiers
10. type conversion
11. namespaces
12. constants
13. typedefs
14. arithmatic
15. user input
16. beep
17. math functions

## calculators
18. circumfrence calculator
19. area calculator
20. hypotenuse calculator
21. if statments
22. switch cases
23. temperature conversion
24. console calculator

## logical operators
25. and 
26. or 
27. not

## functions
28. functions
29. user defined functions
30. arguments
31. return
32. ternary
33. function prototypes
34. functions with variables
35. function templates
36. string functions

## loops
37. for loops
38. while loops
39. do while loops
40. for each loop
41. nested loops
42. break and continue

## arrays
43. arrays
44. size of
45. rows and columns
46. iterate over an array
47. printing arrays with loops
48. 2d arrays
49. search array for element
50. arrays with strings
51. swapping 2 varibles values
52. sorting arrays
53. pass array to function
54. fill function
55. fill an array with user input
56. multidimensional arrays
57. structs
58. arrays of structs
59. pass structs as arguments
60. enums

## random
61. random numbers
62. random number generator
63. random event generator
64. min max generator
65. number guessing game
66. quiz game

## technical
67. bitwise operators
68. memory addresses
69. pass by value Vs pass by reference
70. constant params
81. pointers
82. null pointers
83. dynamic memory
84. recursion
85. writing files
86. reading files

## games
87. tic tac toe (noughts and crosses)
88. rock paper scissors game
89. banking practice system
90. credit card vailidator

## OOP
91. Object Orented Programming
92. contstructors
93. constructors overloading
94. getters and setters
95. inheritance
96. polymorphism

## Libraries
97. static libraries
98. dynamic libraries

99. multithreading


# Installation

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