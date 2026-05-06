# ðŸ“˜ C - More malloc, free

## ðŸ“Œ Description

_No description detected._

---

## ðŸ“š Resources

**Read or watch**:



- [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/should-i-cast-the-result-of-malloc-in-c)



**man or help**:



- `exit (3)`

- `calloc`

- `realloc`

---

## ðŸŽ¯ Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), __without the help of Google__:



### General



- How to use the `exit` function

- What are the functions `calloc` and `realloc` from the standard library and how to use them

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

- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc... is forbidden

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

**Question:** To allocate enough space for an array of 10 integers (on a 64bit, Linux machine), I can use:

**Available answers:**

- `malloc(64 * 10)`
- `malloc(10 * int)`
- `malloc(10 * sizeof(int))`

**Answer:** `malloc(10 * sizeof(int))`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #1</summary>

**Question:** If I want to copy the string "Best School" into a new space in memory, I can use this statement to reserve enough space for it (select all valid answers):

**Available answers:**

- `malloc(sizeof("Best School"))`
- `malloc(strlen("Best School"))`
- `malloc(11)`
- `malloc(12)`
- `malloc(sizeof("Best School") + 1)`
- `malloc(strlen("Best School") + 1)`

**Answer:** `malloc(strlen("Best School") + 1)`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #2</summary>

**Question:** malloc returns a pointer

**Available answers:**

- `True`
- `False`

**Answer:** `True`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #3</summary>

**Question:** malloc returns an address

**Available answers:**

- `True`
- `False`

**Answer:** `True`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #4</summary>

**Question:** What is wrong with this code:

**Available answers:**

- `You don't have enough space to store the copy of the string "Best School"`
- `There is no comment`
- `You can't call strcpy with a string literal`
- `malloc can fail so we should check its return value all the time before using the pointers returned by the function.`

**Answer:** `malloc can fail so we should check its return value all the time before using the pointers returned by the function.`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #5</summary>

**Question:** You can do this:

**Available answers:**

- `Yes`
- `No`

**Answer:** `No`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #6</summary>

**Question:** You can do this:

**Available answers:**

- `Yes`
- `No`

**Answer:** `No`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #7</summary>

**Question:** You can do this:

**Available answers:**

- `Yes`
- `No`

**Answer:** `Yes`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #8</summary>

**Question:** The memory space reserved when calling malloc is on:

**Available answers:**

- `The stack`
- `The heap`

**Answer:** `The heap`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #9</summary>

**Question:** What will you see on the terminal?

**Available answers:**

- `0`
- `98`
- `It doesn't compile`
- `Segmentation Fault`

**Answer:** `Segmentation Fault`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>


---

## ðŸ§© Tasks

<details>
<summary>0. Trust no one</summary>

**Files:**

- [`0-malloc_checked.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_malloc_free/0-malloc_checked.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_malloc_free`

**Task details:**

```text
0. Trust no one
Write a function that allocates memory using
malloc
.
Prototype:
void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if
malloc
fails, the
malloc_checked
function should cause normal process termination with a status value of
98
julien@ubuntu:~/
0x0b
. more malloc, free$ cat
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
#
include
<limits.h>
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
*c;
int
*i;
float
*f;
double
*d;

    c =
malloc_checked
(
sizeof
(
char
) *
1024
);
printf
(
"%p\n"
, (
void
*)c);
    i =
malloc_checked
(
sizeof
(
int
) *
402
);
printf
(
"%p\n"
, (
void
*)i);
    f =
malloc_checked
(
sizeof
(
float
) *
100000000
);
printf
(
"%p\n"
, (
void
*)f);
    d =
malloc_checked
(INT_MAX);
printf
(
"%p\n"
, (
void
*)d);
free
(c);
free
(i);
free
(f);
free
(d);
return
(
0
);
}
julien@ubuntu:~/
0x0b
. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
0
-main.c
0
-malloc_checked.c -o a
julien@ubuntu:~/
0x0b
. more malloc, free$ ./a
0x1e39010
0x1e39830
0x7f31f6c19010
0x6f55f6c19011
julien@ubuntu:~/
0x0b
. more malloc, free$ echo $?
0
julien@ubuntu:~/
0x0b
. more malloc, free$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_malloc_free
File:
0-malloc_checked.c
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
Select a repositoryâ€¦
Folder (optional)
Run the correction
Get a sandbox
QA Review
Ã—
0. Trust no one
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
Students who are done with "0. Trust no one"
Ã—
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>1. string_nconcat</summary>

**Files:**

- [`1-string_nconcat.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_malloc_free/1-string_nconcat.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_malloc_free`

**Task details:**

```text
1. string_nconcat
Write a function that concatenates two strings.
Prototype:
char *string_nconcat(char *s1, char *s2, unsigned int n);
The returned pointer shall point to a newly allocated space in memory, which contains
s1
, followed by the first
n
bytes of
s2
, and null terminated
If the function fails, it should return
NULL
If
n
is greater or equal to the length of
s2
then use the entire string
s2
if
NULL
is passed, treat it as an empty string
julien@ubuntu:~/
0x0b
. more malloc, free$ cat
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
*concat;

    concat =
string_nconcat
(
"Best "
,
"School !!!"
,
6
);
printf
(
"%s\n"
, concat);
free
(concat);
return
(
0
);
}
julien@ubuntu:~/
0x0b
. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
1
-main.c
1
-string_nconcat.c -o
1
-string_nconcat
julien@ubuntu:~/
0x0b
. more malloc, free$ ./
1
-string_nconcat
Best School
julien@ubuntu:~/
0x0b
. more malloc, free$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_malloc_free
File:
1-string_nconcat.c
Score of the task
9
/9
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
1. string_nconcat
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
Students who are done with "1. string_nconcat"
Ã—
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>2. _calloc</summary>

**Files:**

- [`2-calloc.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_malloc_free/2-calloc.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_malloc_free`

**Task details:**

```text
2. _calloc
Write a function that allocates memory for an array, using
malloc
.
Prototype:
void *_calloc(unsigned int nmemb, unsigned int size);
The
_calloc
function allocates memory for an array of
nmemb
elements of
size
bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If
nmemb
or
size
is
0
, then
_calloc
returns
NULL
If
malloc
fails, then
_calloc
returns
NULL
FYI: The standard library provides a different function:
calloc
. Run
man calloc
to learn more.
julien@ubuntu:~/
0x0b
. more malloc, free$ cat
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
#
include
<string.h>
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
*a;

    a = _calloc(
98
,
sizeof
(
char
));
strcpy
(a,
"Best"
);
strcpy
(a +
4
,
" School! :)\n"
);
    a[
97
] =
'!'
;
simple_print_buffer
(a,
98
);
free
(a);
return
(
0
);
}
julien@ubuntu:~/
0x0b
. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
2
-main.c
2
-calloc.c -o
2
-calloc
julien@ubuntu:~/
0x0b
. more malloc, free$ ./
2
-calloc
0x42
0x65
0x73
0x74
0x20
0x53
0x63
0x68
0x6f
0x6f
0x6c
0x21
0x20
0x3a
0x29
0x0a
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x00
0x21
julien@ubuntu:~/
0x0b
. more malloc, free$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_malloc_free
File:
2-calloc.c
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
2. _calloc
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
Students who are done with "2. _calloc"
Ã—
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>3. array_range</summary>

**Files:**

- [`3-array_range.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/more_malloc_free/3-array_range.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `more_malloc_free`

**Task details:**

```text
3. array_range
Write a function that creates an array of integers.
Prototype:
int *array_range(int min, int max);
The array created should contain all the values from
min
(included) to
max
(included), ordered from
min
to
max
Return: the pointer to the newly created array
If
min
>
max
, return
NULL
If
malloc
fails, return
NULL
julien@ubuntu:~/
0x0b
. more malloc, free$ cat
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
#
include
<string.h>
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
int
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
int
*a;

    a =
array_range
(
0
,
10
);
simple_print_buffer
(a,
11
);
free
(a);
return
(
0
);
}
julien@ubuntu:~/
0x0b
. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
3
-main.c
3
-array_range.c -o
3
-array_range
julien@ubuntu:~/
0x0b
. more malloc, free$ ./
3
-array_range
0x00
0x01
0x02
0x03
0x04
0x05
0x06
0x07
0x08
0x09
0x0a
julien@ubuntu:~/
0x0b
. more malloc, free$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
more_malloc_free
File:
3-array_range.c
Score of the task
11
/11
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
3. array_range
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
Students who are done with "3. array_range"
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
