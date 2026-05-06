# ðŸ“˜ C - malloc, free

## ðŸ“Œ Description

_No description detected._

---

## ðŸ“š Resources

**Read or watch**:



- [0x0a - malloc & free - quick overview.pdf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20260504%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20260504T221908Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=e6048d590fc06ce1288b4607f9bbe0b4a501cb0d93cad020d8fe68ac95615b69)

- [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64) (*stop at 6:50*)



**man or help**:



- `malloc`

- `free`

---

## ðŸŽ¯ Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), __without the help of Google__:



### General



- What is the difference between automatic and dynamic allocation

- What is `malloc` and `free` and how to use them

- Why and when use `malloc`

- How to use `valgrind` to check for memory leak

---

## âœ… Requirements

### General



- Allowed editors: `vi`, `vim`, `emacs`

- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`

- All your files should end with a new line

- A `README.md` file, at the root of the folder of the project is mandatory

- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)

- You are not allowed to use global variables

- No more than 5 functions per file

- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc... is forbidden

- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)

- You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account

- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples

- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`

- Don't forget to push your header file

---

## âš™ï¸ Setup

_No specific setup detected._

---

## ðŸ§  Quiz

<details>
<summary>Question #0</summary>

**Question:** What is Valgrind?

**Available answers:**

- `A container service`
- `It's a program to validate memory allocation`
- `It's a new step when I compile with gcc`
- `It's a program to test a C program in a specific environment`

**Answer:** `It's a program to validate memory allocation`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #1</summary>

**Question:** How many bytes will this statement allocate?

**Available answers:**

- `4`
- `8`
- `16`
- `32`

**Answer:** `16`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #2</summary>

**Question:** How many bytes will this statement allocate?

**Available answers:**

- `40`
- `32`
- `10`

**Answer:** `40`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #3</summary>

**Question:** How many bytes will this statement allocate?

**Available answers:**

- `2`
- `4`
- `8`

**Answer:** `8`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #4</summary>

**Question:** How many bytes will this statement allocate?

**Available answers:**

- `10`
- `20`
- `40`

**Answer:** `10`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #5</summary>

**Question:** How many bytes will this statement allocate?

**Available answers:**

- `2`
- `10`
- `4`
- `40`

**Answer:** `10`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #6</summary>

**Question:** How many bytes will this statement allocate?

**Available answers:**

- `1`
- `10`
- `21`
- `20`
- `11`

**Answer:** `11`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>


---

## ðŸ§© Tasks

<details>
<summary>0. Float like a butterfly, sting like a bee</summary>

**Files:**

- [`0-create_array.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/malloc_free/0-create_array.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `malloc_free`

**Task details:**

```text
0. Float like a butterfly, sting like a bee
Write a function that creates an array of chars, and initializes it with a specific char.
Prototype:
char *create_array(unsigned int size, char c);
Returns
NULL
if size =
0
Returns a pointer to the array, or
NULL
if it fails
julien@ubuntu:~/
0x0a
. malloc, free$ cat
0
-main.c
#
include
"main.h"
#
include
<stdio.h>
#
include
<stdlib.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void
simple_print_buffer
(
char
*buffer,
unsigned
int
size)
{
unsigned
int
i;

    i =
0
;
while
(i < size)
    {
if
(i %
10
)
        {
printf
(
" "
);
        }
if
(!(i %
10
) && i)
        {
printf
(
"\n"
);
        }
printf
(
"0x%02x"
, buffer[i]);
        i++;
    }
printf
(
"\n"
);
}
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
*buffer;

    buffer =
create_array
(
98
,
'H'
);
if
(buffer ==
NULL
)
    {
printf
(
"failed to allocate memory\n"
);
return
(
1
);
    }
simple_print_buffer
(buffer,
98
);
free
(buffer);
return
(
0
);
}
julien@ubuntu:~/
0x0a
. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
0
-main.c
0
-create_array.c -o a
julien@ubuntu:~/
0x0a
. malloc, free$ ./a
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
0x48
julien@ubuntu:~/
0x0a
. malloc, free$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
malloc_free
File:
0-create_array.c
Score of the task
10
/10
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repositoryâ€¦
Folder (optional)
Run the correction
Get a sandbox
QA Review
Ã—
0. Float like a butterfly, sting like a bee
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
Ã—
Students who are done with "0. Float like a butterfly, sting like a bee"
Ã—
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>1. The woman who has no imagination has no wings</summary>

**Files:**

- [`1-strdup.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/malloc_free/1-strdup.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `malloc_free`

**Task details:**

```text
1. The woman who has no imagination has no wings
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
Prototype:
char *_strdup(char *str);
The
_strdup()
function returns a pointer to a new string which is a duplicate of the string
str
.  Memory for the new string is obtained with
malloc
, and can be freed with
free
.
Returns
NULL
if str = NULL
On success, the
_strdup
function returns a pointer to the duplicated string.  It returns
NULL
if insufficient memory was available
FYI: The standard library provides a similar function:
strdup
. Run
man strdup
to learn more.
julien@ubuntu:~/
0x0a
. malloc, free$ cat
1
-main.c
#
include
"main.h"
#
include
<stdio.h>
#
include
<stdlib.h>
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
*s;

    s = _strdup(
"Duplicated"
);
if
(s ==
NULL
)
    {
printf
(
"failed to allocate memory\n"
);
return
(
1
);
    }
printf
(
"%s\n"
, s);
free
(s);
return
(
0
);
}
julien@ubuntu:~/
0x0a
. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
1
-main.c
1
-strdup.c -o s
julien@ubuntu:~/
0x0a
. malloc, free$ ./s
Duplicated
julien@ubuntu:~/
0x0a
. malloc, free$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
malloc_free
File:
1-strdup.c
Score of the task
10
/10
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repositoryâ€¦
Folder (optional)
Run the correction
Get a sandbox
QA Review
Ã—
1. The woman who has no imagination has no wings
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
Ã—
Students who are done with "1. The woman who has no imagination has no wings"
Ã—
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>2. He who is not courageous enough to take risks will accomplish nothing in life</summary>

**Files:**

- [`2-str_concat.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/malloc_free/2-str_concat.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `malloc_free`

**Task details:**

```text
2. He who is not courageous enough to take risks will accomplish nothing in life
Write a function that concatenates two strings.
Prototype:
char *str_concat(char *s1, char *s2);
The returned pointer should point to a newly allocated space in memory which contains the contents of
s1
, followed by the contents of
s2
, and null terminated
if
NULL
is passed, treat it as an empty string
The function should return
NULL
on failure
julien@ubuntu:~/
0x0a
. malloc, free$ cat
2
-main.c
#
include
"main.h"
#
include
<stdio.h>
#
include
<stdlib.h>
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
*s;

    s =
str_concat
(
"Best "
,
"School"
);
if
(s ==
NULL
)
    {
printf
(
"failed\n"
);
return
(
1
);
    }
printf
(
"%s\n"
, s);
free
(s);
return
(
0
);
}
julien@ubuntu:~/
0x0a
. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
2
-main.c
2
-str_concat.c -o
2
-str_concat
julien@ubuntu:~/
0x0a
. malloc, free$ ./
2
-str_concat | cat -e
Best School$
julien@ubuntu:~/
0x0a
. malloc, free$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
malloc_free
File:
2-str_concat.c
Score of the task
10
/10
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repositoryâ€¦
Folder (optional)
Run the correction
Get a sandbox
QA Review
Ã—
2. He who is not courageous enough to take risks will accomplish nothing in life
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
Ã—
Students who are done with "2. He who is not courageous enough to take risks will accomplish nothing in life"
Ã—
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>3. If you even dream of beating me you'd better wake up and apologize</summary>

**Files:**

- [`3-alloc_grid.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/malloc_free/3-alloc_grid.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `malloc_free`

**Task details:**

```text
3. If you even dream of beating me you'd better wake up and apologize
Write a function that returns a pointer to a 2 dimensional array of integers.
Prototype:
int **alloc_grid(int width, int height);
Each element of the grid should be initialized to
0
The function should return
NULL
on failure
If
width
or
height
is
0
or negative, return
NULL
julien@ubuntu:~/
0x0a
. malloc, free$ cat
3
-main.c
#
include
"main.h"
#
include
<stdio.h>
#
include
<stdlib.h>
/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void
print_grid
(
int
**grid,
int
width,
int
height)
{
int
w;
int
h;

    h =
0
;
while
(h < height)
    {
        w =
0
;
while
(w < width)
        {
printf
(
"%d "
, grid[h][w]);
            w++;
        }
printf
(
"\n"
);
        h++;
    }
}
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
int
**grid;

    grid =
alloc_grid
(
6
,
4
);
if
(grid ==
NULL
)
    {
return
(
1
);
    }
print_grid
(grid,
6
,
4
);
printf
(
"\n"
);
    grid[
0
][
3
] =
98
;
    grid[
3
][
4
] =
402
;
print_grid
(grid,
6
,
4
);
return
(
0
);
}
julien@ubuntu:~/
0x0a
. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
3
-main.c
3
-alloc_grid.c -o
3
-alloc_grid
julien@ubuntu:~/
0x0a
. malloc, free$ ./
3
-alloc_grid
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
98
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
402
0
julien@ubuntu:~/
0x0a
. malloc, free$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
malloc_free
File:
3-alloc_grid.c
Score of the task
10
/10
pts
100.0%
0
correction requests
My GitHub
Connect GitHub
Connect as:
Disconnect
Repository
Select a repositoryâ€¦
Folder (optional)
Run the correction
Get a sandbox
QA Review
Ã—
3. If you even dream of beating me you'd better wake up and apologize
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
Ã—
Students who are done with "3. If you even dream of beating me you'd better wake up and apologize"
Ã—
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>4. It's not bragging if you can back it up</summary>

**Files:**

- [`4-free_grid.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/malloc_free/4-free_grid.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `malloc_free`

**Task details:**

```text
4. It's not bragging if you can back it up
Write a function that frees a 2 dimensional grid previously created by your
alloc_grid
function.
Prototype:
void free_grid(int **grid, int height);
Note that we will compile with your
alloc_grid.c
file. Make sure it compiles.
julien@ubuntu:~/
0x0a
. malloc, free$ cat
4
-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_grid - prints a grid of integers
 *
@grid
: the address of the two dimensional grid
 *
@width
: width of the grid
 *
@height
: height of the grid
 *
 * Return: Nothing.
 */
void
print_grid
(
int
**grid,
int
width,
int
height)
{
int
w;
int
h;

    h =
0
;
while
(h < height)
    {
        w =
0
;
while
(w < width)
        {
printf
(
"%d "
, grid[h][w]);
            w++;
        }
printf
(
"\n"
);
        h++;
    }
}
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
int
**grid;

    grid =
alloc_grid
(
6
,
4
);
if
(grid ==
NULL
)
    {
return
(
1
);
    }
print_grid
(grid,
6
,
4
);
printf
(
"\n"
);
    grid[
0
][
3
] =
98
;
    grid[
3
][
4
] =
402
;
print_grid
(grid,
6
,
4
);
free_grid
(grid,
4
);
return
(
0
);
}
julien@ubuntu:~/
0x0a
. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
4
-main.c
3
-alloc_grid.c
4
-free_grid.c -o
4
-free_grid
julien@ubuntu:~/
0x0a
. malloc, free$ valgrind ./
4
-free_grid
==
5013
== Memcheck, a memory error detector
==
5013
==
Copyright
(C)
2002
-
2015
,
and
GNU GPL
'd, by Julian Seward et al.
==5013== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5013== Command: ./f
==5013==
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0

0 0 0 98 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 402 0
==5013==
==5013== HEAP SUMMARY:
==5013==     in use at exit: 0 bytes in 0 blocks
==5013==   total heap usage: 6 allocs, 6 frees, 1,248 bytes allocated
==5013==
==5013== All heap blocks were freed -- no leaks are possible
==5013==
==5013== For counts of detected and suppressed errors, rerun with: -v
==5013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0a. malloc, free$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
malloc_free
File:
4-free_grid.c
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
Select a repositoryâ€¦
Folder (optional)
Run the correction
Get a sandbox
QA Review
Ã—
4. It's not bragging if you can back it up
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
Ã—
Students who are done with "4. It's not bragging if you can back it up"
Ã—
Recommended Sandboxes
Loading...
```

</details>


---

## ðŸ§ª Testing

Use the provided task examples and Holberton checker to validate the project.

---

## ðŸ‘¤ Author

Project from Holberton School.

README generated with Antoine's README Factory workflow.
