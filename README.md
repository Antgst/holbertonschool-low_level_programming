# 🧠 Holberton C Foundations Projects

## 📝 Description
This repository contains my Holberton School **C programming** projects.  
It covers the fundamentals of the language and progressively introduces:
- compilation and basic I/O
- variables, conditions, and loops
- functions and nested loops
- pointers, arrays, and strings
- recursion
- program arguments
- dynamic memory allocation
- structures, typedef
- function pointers
- variadic functions

Each project folder includes its own `README.md` describing what each file/script does.

## 🎯 Global Learning Objectives
By the end of this series, I am expected to be able to explain and demonstrate:
- how C programs are compiled and executed
- how to write clean, readable C code following **Betty** style
- how to use variables, operators, conditions, and loops
- how to create and use functions and header files
- how memory is handled (stack vs heap)
- how to manipulate pointers, arrays, and strings safely
- how to use recursion when appropriate
- how to handle `argc` and `argv`
- how to allocate and free memory correctly
- how to model data with structures and typedef
- how to use function pointers and variadic functions

## ✅ General Requirements (Series)
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on **Ubuntu 20.04 LTS** using `gcc`
- Compilation flags:
  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the **Betty** style:
  - `betty-style.pl`
  - `betty-doc.pl`
- Some projects restrict standard library usage or loops; always follow the project-specific rules

---

## 🗂️ Repository Structure

| Folder (project)                   | Level   | Main focus                                   |
|-----------------------------------|---------|----------------------------------------------|
| `p1_hello_world`                  | Novice  | compilation, entry point, basic I/O          |
| `p2_variables_if_else_while`      | Novice  | operators, conditions, loops, ASCII          |
| `p3_functions_nested_loops`       | Novice  | functions, prototypes, headers, scope        |
| `p4_more_functions_nested_loops`  | Novice  | deeper practice of functions and loops       |
| `p5_pointers_arrays_strings`      | Amateur | pointers vs arrays, strings basics           |
| `p6_more_pointers_arrays_strings` | Amateur | advanced string/array manipulation           |
| `p7_even_more_pointers_arrays_strings` | Amateur | pointer to pointer, multidimensional arrays |
| `p8_recursion`                    | Amateur | recursion patterns and constraints           |
| `p9_argc_argv`                    | Amateur | arguments handling in `main`                 |
| `p10_malloc_free`                 | Master  | dynamic allocation basics, valgrind          |
| `p11_more_malloc_free`            | Master  | `exit`, memory allocation utilities          |
| `p12_structures_typedef`          | Master  | data modeling with structs                   |
| `p13_function_pointers`           | Master  | function pointers and memory concepts        |
| `p14_variadic_functions`          | Master  | variadic patterns with `stdarg`              |

---

# 1) 🌱 C - Hello, World (P1)

## 📚 Resources
- Everything you need to know to start with C.pdf
- Dennis Ritchie
- “C” Programming Language: Brian Kernighan
- Why C Programming Is Awesome
- Learning to program in C part 1
- Learning to program in C part 2
- Understanding C program Compilation Process
- Betty Coding Style
- Linus Torvalds on C vs. C++ (after the others)
- `man` or `help`:
  - `gcc`
  - `printf (3)`
  - `puts`
  - `putchar`

## 🎯 Learning Objectives

### General
- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type `gcc main.c`
- What is an entry point
- What is `main`
- How to print text using `printf`, `puts` and `putchar`
- How to get the size of a specific type using `sizeof`
- How to compile using `gcc`
- What is the default program name when compiling with `gcc`
- What is the official C coding style and how to check your code with Betty
- How to find the right header to include when using a standard library function
- How `main` influences the return value of the program

## ✅ Requirements

### C
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the repo
- A `README.md` at the root of this project folder
- No errors or warnings during compilation
- You are not allowed to use `system`
- Betty style is mandatory

### Shell Scripts
- Allowed editors: `vi`, `vim`, `emacs`
- Tested on Ubuntu 20.04 LTS
- Scripts must be exactly two lines long
- All files should end with a new line
- First line must be:
  ```bash
  #!/bin/bash
  ```

## 📌 Scripts
Each file in this folder addresses a specific introduction task to C compilation and basic output.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 2) 🧮 C - Variables, if, else, while (P2)

## 📚 Resources
- Everything you need to know to start with C.pdf
- Keywords and identifiers
- Integers
- Arithmetic Operators in C
- If statements / if…else statement
- Relational operators
- Logical operators
- While loop in C
- `man` or `help`:
  - `ascii`

## 🎯 Learning Objectives

### General
- Arithmetic operators and how to use them
- Logical (boolean) operators and how to use them
- Relational operators and how to use them
- What values are considered TRUE and FALSE in C
- How to use `if`, `if ... else`
- How to use comments
- How to declare variables of types `char`, `int`, `unsigned int`
- How to assign values to variables
- How to print values with `printf`
- How to use the `while` loop
- How to use variables with the `while` loop
- What is the ASCII character set
- Purpose of `-m32` and `-m64` gcc flags

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder
- No errors or warnings during compilation
- You are not allowed to use `system`
- Betty style is mandatory

## 📌 Scripts
Each file practices conditions, loops, and variable handling.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 3) 🧩 C - Functions, nested loops (P3)

## 📚 Resources
- Nested while loops
- C - Functions
- Learning to Program in C (Part 06)
- What is a function prototype
- Purpose of a function prototype
- C - Header Files

## 🎯 Learning Objectives

### General
- What are nested loops and how to use them
- What is a function and how to use functions
- Difference between a declaration and a definition
- What is a prototype
- Scope of variables
- What are the gcc flags:
  ```bash
  -Wall -Werror -pedantic -Wextra -std=gnu89
  ```
- What are header files and how to use them with `#include`

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library
- You are allowed to use `_putchar`
- Prototypes of all functions and `_putchar` must be included in `main.h`
- Don’t forget to push `main.h`

## 📌 Scripts
Each file implements functions that rely on nested loops and `_putchar`.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 4) 🔁 C - More functions, more nested loops (P4)

## 📚 Resources
- Nested while loops
- C - Functions
- Learning to Program in C (Part 06)
- Purpose of a function prototype
- C - Header Files

## 🎯 Learning Objectives

### General
- Strengthen function design and nested loop usage
- Reinforce prototypes, scope, and header organization
- Apply strict compilation and style rules consistently

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library
- You are allowed to use `_putchar`
- Prototypes of all functions and `_putchar` must be included in `main.h`
- Don’t forget to push `main.h`

## 📌 Scripts
Each file expands on previous function and loop patterns with stricter practice.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 5) 🧷 C - Pointers, arrays and strings (P5)

## 📚 Resources
- Pointers and arrays
- Data Structures
- C - Arrays
- C - Pointers
- C - Strings
- Memory Layout

## 🎯 Learning Objectives

### General
- What are pointers and how to use them
- What are arrays and how to use them
- Differences between pointers and arrays
- How to use and manipulate strings
- Scope of variables

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library
- You are allowed to use `_putchar`
- Prototypes of all functions and `_putchar` must be included in `main.h`
- Don’t forget to push `main.h`

## 📌 Scripts
Each file introduces pointer arithmetic, array traversal, and string handling.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 6) 🧵 C - More pointers, arrays and strings (P6)

## 🎯 Learning Objectives
This project continues the practice of:
- pointers and arrays
- string manipulation patterns
- safe iteration and transformation techniques

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library
- You are allowed to use `_putchar`
- Prototypes of all functions and `_putchar` must be included in `main.h`
- Don’t forget to push `main.h`

## 📌 Scripts
Each file strengthens mastery of pointers, arrays, and strings using Holberton constraints.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 7) 🧭 C - Even more pointers, arrays and strings (P7)

## 📚 Resources
- C - Pointer to Pointer
- Pointer to Pointer with example
- Multi-dimensional Arrays in C
- Two dimensional arrays in C programming with example

## 🎯 Learning Objectives

### General
- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- Most common C standard library functions to manipulate strings

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library
- You are allowed to use `_putchar`
- Prototypes of all functions and `_putchar` must be included in `main.h`
- Don’t forget to push `main.h`

## 📌 Scripts
Each file focuses on pointer-to-pointer logic and multidimensional array usage.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 8) 🌀 C - Recursion (P8)

## 📚 Resources
- Recursion, introduction
- What on Earth is Recursion?
- C - Recursion
- C Programming Tutorial 85
- C Programming Tutorial 86

## 🎯 Learning Objectives

### General
- What is recursion
- How to implement recursion
- When you should implement recursion
- When you shouldn’t implement recursion

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library
- You are allowed to use `_putchar`
- Prototypes of all functions and `_putchar` must be included in `main.h`
- Don’t forget to push `main.h`
- You are not allowed to use any kind of loops
- You are not allowed to use static variables

## 📌 Scripts
Each file solves problems using recursion only, respecting strict constraints.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 9) 🧳 C - argc, argv (P9)

## 📚 Resources
- Arguments to main
- argc and argv
- What does argc and argv mean?
- How to compile with unused variables

## 🎯 Learning Objectives

### General
- How to use arguments passed to your program
- Two prototypes of `main` and when to use them
- How to use `__attribute__((unused))` or `(void)` for unused variables

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- Prototypes of all functions and `_putchar` must be included in `main.h`
- Don’t forget to push `main.h`
- You are allowed to use the standard library

## 📌 Scripts
Each file explores argument parsing and behavior of different `main` signatures.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 10) 🧱 C - malloc, free (P10)

## 📚 Resources
- 0x0a - malloc & free - quick overview.pdf
- Dynamic memory allocation in C
- `man` or `help`:
  - `malloc`
  - `free`

## 🎯 Learning Objectives

### General
- Difference between automatic and dynamic allocation
- What is `malloc` and `free` and how to use them
- Why and when to use `malloc`
- How to use `valgrind` to check for memory leaks

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- Only standard library functions allowed:
  - `malloc`
  - `free`
- You are allowed to use `_putchar`
- Prototypes of all functions and `_putchar` must be included in `main.h`
- Don’t forget to push `main.h`

## 📌 Scripts
Each file introduces dynamic allocation patterns and safe memory handling.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 11) 🧰 C - More malloc, free (P11)

## 📚 Resources
- Do I cast the result of malloc?
- `man` or `help`:
  - `exit (3)`
  - `calloc`
  - `realloc`

## 🎯 Learning Objectives

### General
- How to use the `exit` function
- What are `calloc` and `realloc` and how to use them

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- Only standard library functions allowed:
  - `malloc`
  - `free`
  - `exit`
- You are allowed to use `_putchar`
- Prototypes of all functions and `_putchar` must be included in `main.h`
- Don’t forget to push `main.h`

## 📌 Scripts
Each file extends dynamic allocation with safer patterns and exit handling.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 12) 🧱 C - Structures, typedef (P12)

## 📚 Resources
- 0x0d. Structures.pdf
- struct (C programming language)
- Documentation: structures
- 0x0d. Typedef and structures.pdf
- typedef
- Programming in C by Stephen Kochan - Chapter 8
- The Lost Art of C Structure Packing (Advanced)

## 🎯 Learning Objectives

### General
- What are structures, when, why and how to use them
- How to use `typedef`

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- Only standard library functions allowed:
  - `printf`
  - `malloc`
  - `free`
  - `exit`
- All header files should be include guarded
- Don’t forget to push your header file

## 📌 Scripts
Each file introduces data modeling using structures and clean type aliases.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 13) 🧠 C - Function pointers (P13)

## 📚 Resources
- Function Pointer in C
- Pointers to functions
- Function Pointers in C / C++
- Why pointers to functions?
- Everything you need to know about pointers in C

## 🎯 Learning Objectives

### General
- What are function pointers and how to use them
- What does a function pointer hold
- Where a function pointer points to in virtual memory

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- Only standard library functions allowed:
  - `malloc`
  - `free`
  - `exit`
- You are allowed to use `_putchar`
- Prototypes must be included in `function_pointers.h`
- All header files should be include guarded
- Don’t forget to push `function_pointers.h`

## 📌 Scripts
Each file explores how to pass behavior as data using function pointers.  
(See the project folder `README.md` for the detailed per-file description.)

---

# 14) 🧪 C - Variadic functions (P14)

## 📚 Resources
- `stdarg.h`
- Variadic Functions
- Const Keyword
- `man` or `help`:
  - `stdarg`

## 🎯 Learning Objectives

### General
- What are variadic functions
- How to use `va_start`, `va_arg`, and `va_end`
- Why and how to use the `const` type qualifier

## ✅ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS with:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Betty style is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- Only standard library functions allowed:
  - `malloc`
  - `free`
  - `exit`
- You are allowed to use:
  - `va_start`
  - `va_arg`
  - `va_end`
- You are allowed to use `_putchar`
- Prototypes must be included in `variadic_functions.h`
- All header files should be include guarded
- Don’t forget to push `variadic_functions.h`

## 📌 Scripts
Each file implements flexible APIs using variadic patterns under strict constraints.  
(See the project folder `README.md` for the detailed per-file description.)

---

## 👤 Author
Antoine Gousset — Holberton student & future fullstack dev
- GitHub: https://github.com/Antgst
