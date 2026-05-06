# 📘 C - Structures, typedef

## 📌 Description

_No description detected._

---

## 📚 Resources

**Read or watch**:


- [0x0d. Structures.pdf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20260504%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20260504T222123Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9d9cb5cd729419835bcd5954a8d920a3c3a64a939bc238ef548a0fccbf5031f5)

- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))

- [Documentation: structures](https://github.com/hs-hq/Betty/wiki/Documentation:-Data-structures)

- [0x0d. Typedef and structures.pdf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20260504%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20260504T222153Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9c2bad51ad0b5e3872ec14991f2ce798d81e500f70b37b333ad1cb5067b3c89c)

- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)

- **Programming in C** by Stephen Kochan - *Chapter 8, Working with Structures p163-189*

- [The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/) (*Advanced - not mandatory*)

---

## 🎯 Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), __without the help of Google__:


### General


- What are structures, when, why and how to use them

- How to use `typedef`

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

- The only C standard library functions allowed are `printf`, `malloc`, `free` and `exit`.

- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples

- Don't forget to push your header file

- All your header files should be include guarded

---

## ⚙️ Setup

_No specific setup detected._

---

## 🧠 Quiz

<details>
<summary>Question #0</summary>

**Question:** You should write documentation for all the structures you create

**Available answers:**

- `True`
- `I'll do it 5 minutes before the deadline when I try Betty on my header file`
- `As soon as I write my structure.`

**Answer:** `As soon as I write my structure.`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #1</summary>

**Question:** The general syntax for a struct declaration in C is:

**Available answers:**

- `True`
- `False`
- `Maybe`

**Answer:** `True`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #2</summary>

**Question:** Those two codes do the same thing:

**Available answers:**

- `True`
- `False: the second does not compile`
- `False: the members of the structures will not have the same values`

**Answer:** `True`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #3</summary>

**Question:** Given this code:

**Available answers:**

- `my_point.y = 98;`
- `my_point->y = 98;`
- `p.y = 98;`
- `(*p).y = 98;`
- `p->y = 98;`

**Answer:** `p->y = 98;`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>


---

## 🧩 Tasks

<details>
<summary>0. Poppy</summary>

**Files:**

- [`dog.h`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/structures_typedef/dog.h)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `structures_typedef`

**Task details:**

```text
0. Poppy
Define a new type
struct dog
with the following elements:
name
, type =
char *
age
, type =
float
owner
, type =
char *
julien@ubuntu:~/
0x0d
. structures,
typedef
$ cat
0
-main.c
#
include
<stdio.h>
#
include
"dog.h"
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
struct
dog
my_dog;

    my_dog.name =
"Poppy"
;
    my_dog.age =
3.5
;
    my_dog.owner =
"Bob"
;
printf
(
"My name is %s, and I am %.1f :) - Woof!\n"
, my_dog.name, my_dog.age);
return
(
0
);
}
julien@ubuntu:~/
0x0d
. structures,
typedef
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
0
-main.c -o a
julien@ubuntu:~/
0x0d
. structures,
typedef
$ ./a
My name is Poppy,
and
I am
3.5
:) - Woof!
julien@ubuntu:~/
0x0d
. structures,
typedef
$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
structures_typedef
File:
dog.h
0. Poppy
---
---
---
---
---
```

</details>

<details>
<summary>1. A dog is the only thing on earth that loves you more than you love yourself</summary>

**Files:**

- [`1-init_dog.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/structures_typedef/1-init_dog.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `structures_typedef`

**Task details:**

```text
1. A dog is the only thing on earth that loves you more than you love yourself
Write a function that initialize a variable of type
struct dog
Prototype:
void init_dog(struct dog *d, char *name, float age, char *owner);
julien@ubuntu:~/
0x0d
. structures,
typedef
$ cat
1
-main.c
#
include
<stdio.h>
#
include
"dog.h"
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
struct
dog
my_dog;
init_dog
(&my_dog,
"Poppy"
,
3.5
,
"Bob"
);
printf
(
"My name is %s, and I am %.1f :) - Woof!\n"
, my_dog.name, my_dog.age);
return
(
0
);
}
julien@ubuntu:~/
0x0d
. structures,
typedef
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
1
-main.c
1
-init_dog.c -o b
julien@ubuntu:~/
0x0d
. structures,
typedef
$ ./b
My name is Poppy,
and
I am
3.5
:) - Woof!
julien@ubuntu:~/
0x0d
. structures,
typedef
$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
structures_typedef
File:
1-init_dog.c
1. A dog is the only thing on earth that loves you more than you love yourself
---
---
---
---
---
```

</details>

<details>
<summary>2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad</summary>

**Files:**

- [`2-print_dog.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/structures_typedef/2-print_dog.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `structures_typedef`

**Task details:**

```text
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a
struct dog
Prototype:
void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of
d
is
NULL
, print
(nil)
instead of this element. (if
name
is
NULL
, print
Name: (nil)
)
If
d
is
NULL
print nothing.
julien@ubuntu:~/
0x0d
. structures,
typedef
$ cat
2
-main.c
#
include
<stdio.h>
#
include
"dog.h"
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
struct
dog
my_dog;

    my_dog.name =
"Poppy"
;
    my_dog.age =
3.5
;
    my_dog.owner =
"Bob"
;
print_dog
(&my_dog);
return
(
0
);
}
julien@ubuntu:~/
0x0d
. structures,
typedef
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
2
-main.c
2
-print_dog.c -o c
julien@ubuntu:~/
0x0d
. structures,
typedef
$ ./c
Name: Poppy
Age:
3.500000
Owner: Bob
julien@ubuntu:~/
0x0d
. structures,
typedef
$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
structures_typedef
File:
2-print_dog.c
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
---
---
---
---
---
```

</details>

<details>
<summary>3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read</summary>

**Files:**

- [`dog.h`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/structures_typedef/dog.h)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `structures_typedef`

**Task details:**

```text
3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Define a new type
dog_t
as a new name for the type
struct dog
.
julien@ubuntu:~/
0x0d
. structures,
typedef
$ cat
3
-main.c
#
include
<stdio.h>
#
include
"dog.h"
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
dog_t
my_dog;

    my_dog.name =
"Poppy"
;
    my_dog.age =
3.5
;
    my_dog.owner =
"Bob"
;
printf
(
"My name is %s, and I am %.1f :) - Woof!\n"
, my_dog.name, my_dog.age);
return
(
0
);
}
julien@ubuntu:~/
0x0d
. structures,
typedef
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
3
-main.c -o d
julien@ubuntu:~/
0x0d
. structures,
typedef
$ ./d
My name is Poppy,
and
I am
3.5
:) - Woof!
julien@ubuntu:~/
0x0d
. structures,
typedef
$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
structures_typedef
File:
dog.h
3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
---
---
---
---
---
```

</details>

<details>
<summary>4. A door is what a dog is perpetually on the wrong side of</summary>

**Files:**

- [`4-new_dog.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/structures_typedef/4-new_dog.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `structures_typedef`

**Task details:**

```text
4. A door is what a dog is perpetually on the wrong side of
Write a function that creates a new dog.
Prototype:
dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of
name
and
owner
Return
NULL
if the function fails
julien@ubuntu:~/
0x0d
. structures,
typedef
$ cat
4
-main.c
#
include
<stdio.h>
#
include
"dog.h"
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
dog_t
*my_dog;

    my_dog =
new_dog
(
"Poppy"
,
3.5
,
"Bob"
);
printf
(
"My name is %s, and I am %.1f :) - Woof!\n"
, my_dog->name, my_dog->age);
return
(
0
);
}
julien@ubuntu:~/
0x0d
. structures,
typedef
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
4
-main.c
4
-new_dog.c -o e
julien@ubuntu:~/
0x0d
. structures,
typedef
$ ./e
My name is Poppy,
and
I am
3.5
:) - Woof!
julien@ubuntu:~/
0x0d
. structures,
typedef
$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
structures_typedef
File:
4-new_dog.c
4. A door is what a dog is perpetually on the wrong side of
---
---
---
---
---
```

</details>

<details>
<summary>5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg</summary>

**Files:**

- [`5-free_dog.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/structures_typedef/5-free_dog.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `structures_typedef`

**Task details:**

```text
5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Write a function that frees dogs.
Prototype:
void free_dog(dog_t *d);
julien
@ubuntu
:
~/
0x0d
. structures, typedef$ cat
5
-
main.c
#include
<
stdio.h
>
#include
"dog.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t
*
my_dog;

    my_dog
=
new_dog(
"Poppy"
,
3.5
,
"Bob"
);
    printf(
"My name is %s, and I am %.1f :) - Woof!
\n
"
, my_dog->name, my_dog->age);
    free_dog(my_dog);
return
(
0
);
}
julien
@ubuntu
:
~/
0x0d
. structures, typedef$ gcc
-
Wall
-
pedantic
-
Werror
-
Wextra
-
std
=
gnu89
5
-
main.c
5
-
free_dog.c
4
-
new_dog.c
-
o f
julien
@ubuntu
:
~/
0x0d
. structures, typedef$ valgrind
./
f
==
22840
==
Memcheck
, a memory error detector
==
22840
==
Copyright
(
C
)
2002
-
2015
, and
GNU
GPL
'd, by
Julian
Seward
et al.
==
22840
==
Using
Valgrind
-
3.11
.
0
and
LibVEX
; rerun with
-
h
for
copyright info
==
22840
==
Command
:
./
f
==
22840
==
My
name
is
Poppy
, and
I
am
3.5
:)
-
Woof
!
==
22840
==
==
22840
==
HEAP
SUMMARY
:
==
22840
==
in
use at exit:
0
bytes
in
0
blocks
==
22840
==
total heap usage:
4
allocs,
4
frees,
1
,
059
bytes allocated
==
22840
==
==
22840
==
All
heap blocks were freed
--
no leaks are possible
==
22840
==
==
22840
==
For
counts of detected and suppressed errors, rerun with:
-
v
==
22840
==
ERROR
SUMMARY
:
0
errors from
0
contexts (suppressed:
0
from
0
)
julien
@ubuntu
:
~/
0x0d
. structures, typedef$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
structures_typedef
File:
5-free_dog.c
5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
---
---
---
---
---
```

</details>


---

## 🧪 Testing

Use the provided task examples and Holberton checker to validate the project.

---

## 👤 Author

Project from Holberton School.

README generated with Antoine's README Factory workflow.
