# 📘 C - More functions, more nested loops

## 📌 Description

_No description detected._

---

## 📚 Resources

**Read or watch**:



- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)

- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)

- [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw) (*stop at 14:00*)

- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/c/c-programming-language/)

- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) (*stop before the "Once-Only Headers" paragraph*)

---

## 🎯 Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), __without the help of Google__:



### General



- What are nested loops and how to use them

- What is a function and how do you use functions

- What is the difference between a declaration and a definition of a function

- What is a prototype

- Scope of variables

- What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`

- What are header files and how to to use them with `#include`

---

## ✅ Requirements

### General



- Allowed editors: `vi`, `vim`, `emacs`

- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`

- All your files should end with a new line

- A `README.md` file, at the root of the folder of the project is mandatory

- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)

- You are not allowed to use global variables

- No more than 5 functions per file

- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc... is forbidden

- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)

- You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account

- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples

- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`

- Don't forget to push your header file

---

## ⚙️ Setup

_No specific setup detected._

---

## 🧠 Quiz

<details>
<summary>Question #0</summary>

**Question:** What is the output of the following piece of code?

**Available answers:**

- `48495051525354555657`
- `0123456789`
- `School`

**Answer:** `0123456789`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #1</summary>

**Question:** What is the output of the following piece of code?

**Available answers:**

- `0101010101`
- `0123456789`
- `1010101010`

**Answer:** `0101010101`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #2</summary>

**Question:** What is the output of the following piece of code?

**Available answers:**

- `0123456789`
- `2468101214161820`
- `024681012141618`

**Answer:** `024681012141618`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #3</summary>

**Question:** What is the output of the following piece of code?

**Available answers:**

- `0011223344`
- `0123456789`
- `0112233445`

**Answer:** `0112233445`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #4</summary>

**Question:** What is the output of the following piece of code?

**Available answers:**

- `9876543210`
- `987654321`
- `-9-8-7-6-5-4-3-2-10`
- `-9-8-7-6-5-4-3-2-1`

**Answer:** `987654321`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #5</summary>

**Question:** What is the output of the following piece of code?

**Available answers:**

- `87654321`
- `876543210`
- `9876543210`
- `987654321`

**Answer:** `876543210`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #6</summary>

**Question:** What is the output of the following piece of code?

**Available answers:**

- `87654321`
- `9876543210`
- `876543210`
- `987654321`

**Answer:** `87654321`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #7</summary>

**Question:** What is the return value of the following function?

**Available answers:**

- `12`
- `98`
- `402`

**Answer:** `98`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #8</summary>

**Question:** What is the return value of the following function?

**Available answers:**

- `0`
- `9`
- `10`
- `0123456789`

**Answer:** `10`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>


---

## 🧩 Tasks

<details>
<summary>0. isupper</summary>

**Files:**

- [`0-isupper.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/0-isupper.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_functions_nested_loops`

**Task details:**

```text
0. isupper
Write a function that checks for uppercase character.
Prototype:
int _isupper(int c);
Returns
1
if
c
is uppercase
Returns
0
otherwise
FYI: The standard library provides a similar function:
isupper
. Run
man isupper
to learn more.
julien@ubuntu:~/$ cat
0
-main.c
#
include
"main.h"
#
include
<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int
main
(
void
)
{
char
c;

    c =
'A'
;
printf
(
"%c: %d\n"
, c, _isupper(c));
    c =
'a'
;
printf
(
"%c: %d\n"
, c, _isupper(c));
return
(
0
);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
0
-main.c
0
-isupper.c -o
0
-isuper
julien@ubuntu:~/$ ./
0
-isuper
A:
1
a:
0
julien@ubuntu:~/$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_functions_nested_loops
File:
0-isupper.c
Score of the task
4
/4
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
0. isupper
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
×
Students who are done with "0. isupper"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>1. isdigit</summary>

**Files:**

- [`1-isdigit.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/1-isdigit.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_functions_nested_loops`

**Task details:**

```text
1. isdigit
Write a function that checks for a digit (
0
through
9
).
Prototype:
int _isdigit(int c);
Returns
1
if
c
is a digit
Returns
0
otherwise
FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.
julien@ubuntu:~/$ cat
1
-main.c
#
include
"main.h"
#
include
<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int
main
(
void
)
{
char
c;

    c =
'0'
;
printf
(
"%c: %d\n"
, c, _isdigit(c));
    c =
'a'
;
printf
(
"%c: %d\n"
, c, _isdigit(c));
return
(
0
);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
1
-main.c
1
-isdigit.c -o
1
-isdigit
julien@ubuntu:~/$ ./
1
-isdigit
0
:
1
a:
0
julien@ubuntu:~/$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_functions_nested_loops
File:
1-isdigit.c
Score of the task
6
/6
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
1. isdigit
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
×
Students who are done with "1. isdigit"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>2. Collaboration is multiplication</summary>

**Files:**

- [`2-mul.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/2-mul.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_functions_nested_loops`

**Task details:**

```text
2. Collaboration is multiplication
Write a function that multiplies two integers.
Prototype:
int mul(int a, int b);
julien@ubuntu:~/$ cat
2
-main.c
#
include
"main.h"
#
include
<stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int
main
(
void
)
{
printf
(
"%d\n"
,
mul
(
98
,
1024
));
printf
(
"%d\n"
,
mul
(
-402
,
4096
));
return
(
0
);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
2
-main.c
2
-mul.c -o
2
-mul
julien@ubuntu:~/$ ./
2
-mul
100352
-1646592
julien@ubuntu:~/$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_functions_nested_loops
File:
2-mul.c
Score of the task
7
/7
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
2. Collaboration is multiplication
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
×
Students who are done with "2. Collaboration is multiplication"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>3. The numbers speak for themselves</summary>

**Files:**

- [`3-print_numbers.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/3-print_numbers.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_functions_nested_loops`

**Task details:**

```text
3. The numbers speak for themselves
Write a function that prints the numbers, from
0
to
9
, followed by a new line.
Prototype:
void print_numbers(void);
You can only use
_putchar
twice in your code
julien
@ubuntu
:~/$ cat
3
-main.c
#include
"main.h"
/**
 * main - check the code
 *
 *
Return
: Always
0
.
 */
int main(void)
{
print_numbers
();
    return (
0
);
}
julien
@ubuntu
:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c
3
-main.c
3
-print_numbers.c -o
3
-print_numbers
julien
@ubuntu
:~/$ ./
3
-print_numbers | cat -e
0123456789
$
julien
@ubuntu
:~/$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_functions_nested_loops
File:
3-print_numbers.c
Score of the task
6
/6
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
3. The numbers speak for themselves
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
×
Students who are done with "3. The numbers speak for themselves"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>4. I believe in numbers and signs</summary>

**Files:**

- [`4-print_most_numbers.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/4-print_most_numbers.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_functions_nested_loops`

**Task details:**

```text
4. I believe in numbers and signs
Write a function that prints the numbers, from
0
to
9
, followed by a new line.
Prototype:
void print_most_numbers(void);
Do not print
2
and
4
You can only use
_putchar
twice in your code
julien
@ubuntu
:~/$ cat
4
-main.c
#include
"main.h"
/**
 * main - check the code
 *
 *
Return
: Always
0
.
 */
int main(void)
{
print_most_numbers
();
    return (
0
);
}
julien
@ubuntu
:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c
4
-main.c
4
-print_most_numbers.c -o
4
-print_most_numbers
julien
@ubuntu
:~/$ ./
4
-print_most_numbers
01356789
julien
@ubuntu
:~/$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_functions_nested_loops
File:
4-print_most_numbers.c
Score of the task
6
/6
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
4. I believe in numbers and signs
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
×
Students who are done with "4. I believe in numbers and signs"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>5. Numbers constitute the only universal language</summary>

**Files:**

- [`5-more_numbers.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/5-more_numbers.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_functions_nested_loops`

**Task details:**

```text
5. Numbers constitute the only universal language
Write a function that prints 10 times the numbers, from
0
to
14
, followed by a new line.
Prototype:
void more_numbers(void);
You can only use
_putchar
three times in your code
julien
@ubuntu
:~/$ cat
5
-main.c
#include
"main.h"
/**
 * main - check the code
 *
 *
Return
: Always
0
.
 */
int main(void)
{
more_numbers
();
    return (
0
);
}
julien
@ubuntu
:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c
5
-main.c
5
-more_numbers.c -o
5
-more_numbers
julien
@ubuntu
:~/$ ./
5
-more_numbers
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
julien
@ubuntu
:~/
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_functions_nested_loops
File:
5-more_numbers.c
Score of the task
6
/6
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
5. Numbers constitute the only universal language
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
×
Students who are done with "5. Numbers constitute the only universal language"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>6. The shortest distance between two points is a straight line</summary>

**Files:**

- [`6-print_line.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/6-print_line.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_functions_nested_loops`

**Task details:**

```text
6. The shortest distance between two points is a straight line
Write a function that draws a straight line in the terminal.
Prototype:
void print_line(int n);
You can only use
_putchar
function to print
Where
n
is the number of times the character
_
should be printed
The line should end with a
\n
If
n
is
0
or less, the function should only print
\n
julien
@ubuntu
:~/$ cat
6
-main.c
#include
"main.h"
/**
 * main - check the code
 *
 *
Return
: Always
0
.
 */
int main(void)
{
print_line
(
0
);
print_line
(
2
);
print_line
(
10
);
print_line
(-
4
);
    return (
0
);
}
julien
@ubuntu
:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c
6
-main.c
6
-print_line.c -o
6
-lines
julien
@ubuntu
:~/$ ./
6
-lines | cat -e
$
__$
__________$
$
julien
@ubuntu
:~/$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_functions_nested_loops
File:
6-print_line.c
Score of the task
7
/7
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
6. The shortest distance between two points is a straight line
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
×
Students who are done with "6. The shortest distance between two points is a straight line"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>7. I feel like I am diagonally parked in a parallel universe</summary>

**Files:**

- [`7-print_diagonal.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/7-print_diagonal.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_functions_nested_loops`

**Task details:**

```text
7. I feel like I am diagonally parked in a parallel universe
Write a function that draws a diagonal line on the terminal.
Prototype:
void print_diagonal(int n);
You can only use
_putchar
function to print
Where
n
is the number of times the character
\
should be printed
The diagonal should end with a
\n
If
n
is
0
or less, the function should only print a
\n
julien
@ubuntu
:~/$ cat
7
-main.c
#include
"main.h"
/**
 * main - check the code
 *
 *
Return
: Always
0
.
 */
int main(void)
{
print_diagonal
(
0
);
print_diagonal
(
2
);
print_diagonal
(
10
);
print_diagonal
(-
4
);
    return (
0
);
}
julien
@ubuntu
:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c
7
-main.c
7
-print_diagonal.c -o
7
-diagonals
julien
@ubuntu
:~/$ ./
7
-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
julien
@ubuntu
:~/$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_functions_nested_loops
File:
7-print_diagonal.c
Score of the task
7
/7
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
7. I feel like I am diagonally parked in a parallel universe
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
×
Students who are done with "7. I feel like I am diagonally parked in a parallel universe"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>8. You are so much sunshine in every square inch</summary>

**Files:**

- [`8-print_square.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/8-print_square.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_functions_nested_loops`

**Task details:**

```text
8. You are so much sunshine in every square inch
Write a function that prints a square, followed by a new line.
Prototype:
void print_square(int size);
You can only use
_putchar
function to print
Where
size
is the size of the square
If
size
is
0
or less, the function should print only a new line
Use the character
#
to print the square
julien@ubuntu:~/$ cat 8-main.c
#
include
"main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
julien@ubuntu:~/$ ./8-squares
#
#
#
#
#
#########
#
#########
#
#########
#
#########
#
#########
#
#########
#
#########
#
#########
#
#########
#
#########
julien@ubuntu:~/$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_functions_nested_loops
File:
8-print_square.c
Score of the task
7
/7
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
8. You are so much sunshine in every square inch
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
×
Students who are done with "8. You are so much sunshine in every square inch"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>9. Fizz-Buzz</summary>

**Files:**

- [`9-fizz_buzz.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/9-fizz_buzz.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_functions_nested_loops`

**Task details:**

```text
9. Fizz-Buzz
The "Fizz-Buzz test" is an interview question designed to help filter out the 99.5% of programming job candidates who can't seem to program their way out of a wet paper bag.
Write a program that prints the numbers from
1
to
100
, followed by a new line. But for multiples of three print
Fizz
instead of the number and for the multiples of five print
Buzz
. For numbers which are multiples of both three and five print
FizzBuzz
.
Each number or word should be separated by a space
You are allowed to use the standard library
julien
@ubuntu
:~/
$
gcc -
Wall
-pedantic -
Werror
-
Wextra
-std=gnu89
9
-fizz_buzz.c -o
9
-fizz_buzz
julien
@ubuntu
:~/
$
./
9
-fizz_buzz
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17
Fizz
19
Buzz
Fizz
22
23
Fizz
Buzz
26
Fizz
28
29
FizzBuzz
31
32
Fizz
34
Buzz
Fizz
37
38
Fizz
Buzz
41
Fizz
43
44
FizzBuzz
46
47
Fizz
49
Buzz
Fizz
52
53
Fizz
Buzz
56
Fizz
58
59
FizzBuzz
61
62
Fizz
64
Buzz
Fizz
67
68
Fizz
Buzz
71
Fizz
73
74
FizzBuzz
76
77
Fizz
79
Buzz
Fizz
82
83
Fizz
Buzz
86
Fizz
88
89
FizzBuzz
91
92
Fizz
94
Buzz
Fizz
97
98
Fizz
Buzz
julien
@ubuntu
:~/
$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_functions_nested_loops
File:
9-fizz_buzz.c
Score of the task
7
/7
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
9. Fizz-Buzz
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
×
Students who are done with "9. Fizz-Buzz"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>10. Triangles</summary>

**Files:**

- [`10-print_triangle.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_functions_nested_loops/10-print_triangle.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_functions_nested_loops`

**Task details:**

```text
10. Triangles
Write a function that prints a triangle, followed by a new line.
Prototype:
void print_triangle(int size);
You can only use
_putchar
function to print
Where
size
is the size of the triangle
If
size
is
0
or less, the function should print only a new line
Use the character
#
to print the triangle
julien@ubuntu:~
/$ cat 10-main.c
#include "main.h"

/
**
 * main - check the code
 *
 * Return: Always
0
.
 *
/
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
julien@ubuntu:~/
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c
10
-main.c
10
-print_triangle.c -o
10
-triangles
julien@ubuntu:~
/$ ./
10
-triangles
#
##
#
##
###
####
#####
######
#######
########
#########
##########
#
julien@ubuntu:~
/$ ./
10
-triangles |
tr
' '
. | cat -e
.
#$
##$
.........
#$
........
##$
.......
###$
......
####$
.....
#####$
....
######$
...
#######$
..
########$
.
#########$
##########$
#$
$
julien@ubuntu:~/$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_functions_nested_loops
File:
10-print_triangle.c
Score of the task
7
/7
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
10. Triangles
Commit used:
User:
---
URL:
Click here
ID:
---
Author:
---
Subject:
---
Date:
---
×
Students who are done with "10. Triangles"
×
Recommended Sandboxes
Loading...
```

</details>


---

## 🧪 Testing

Use the provided task examples and Holberton checker to validate the project.

---

## 👤 Author

Project from Holberton School.

README generated with Antoine's README Factory workflow.
