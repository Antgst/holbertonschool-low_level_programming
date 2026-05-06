# 📘 C - Singly linked lists

## 📌 Description

_No description detected._

---

## 📚 Resources

**Read or watch**:



- [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&t=130s)

- [Google](https://www.google.com/#q=linked+lists)

- [Youtube](https://www.youtube.com/results?search_query=linked+lists)

---

## 🎯 Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), __without the help of Google__:



### General



- When and why using linked lists vs arrays

- How to build and use linked lists

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

- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc... is forbidden

- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)

- You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account

- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples

- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`

- Don't forget to push your header file

- All your header files should be include guarded

---

## ⚙️ Setup

_No specific setup detected._

---

## 🧠 Quiz

<details>
<summary>Question #0</summary>

**Question:** What's a node? (select all possible answers)

**Available answers:**

- `It's a server`
- `It's a structure with a pointer to the next node and value information`
- `It's a cell in an array`
- `It's an integer`
- `It's a space allocated in memory`

**Answer:** `It's a space allocated in memory`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #1</summary>

**Question:** What's the "head" of a linked list?

**Available answers:**

- `It's the last node`
- `It's the node with the highest value`
- `It's the first node`
- `It's the node with the lowest value`
- `It's the node with the pointer to the next equals to NULL`

**Answer:** `It's the first node`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #2</summary>

**Question:** What's the "tail" of a linked list?

**Available answers:**

- `It's the node with the pointer to the next equals to NULL`
- `It's the first node`
- `It's the node with the highest value`
- `It's the node with the lowest value`

**Answer:** `It's the node with the pointer to the next equals to NULL`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #3</summary>

**Question:** In a singly linked list, what are possible directions to traverse it? (select all possible answers)

**Available answers:**

- `Forward`
- `Backward`

**Answer:** `Forward`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>

<details>
<summary>Question #4</summary>

**Question:** Arrays Vs Linked Lists: select all true statements

**Available answers:**

- `We can add elements indefinitely to a linked list`
- `We can add elements indefinitely to an array`
- `Linked list can contain as value a structure`
- `Array can contain as value a structure`
- `We can easily remove an element from an Array`
- `We can easily remove an element from a Linked list`
- `Memory is aligned for a Linked list - each elements are back to back in the memory`
- `Memory is aligned for an Array - each elements are back to back in the memory`

**Answer:** `Memory is aligned for an Array - each elements are back to back in the memory`

**Explanation / tip:**

_To be reviewed and completed manually if needed._

</details>


---

## 🧩 Tasks

<details>
<summary>0. Print list</summary>

**Files:**

- [`0-print_list.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/singly_linked_lists/0-print_list.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `singly_linked_lists`

**Task details:**

```text
0. Print list
Write a function that prints all the elements of a
list_t
list.
Prototype:
size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If
str
is
NULL
, print
[0] (nil)
You are allowed to use
printf
julien@ubuntu:~/Singly linked lists$ cat
0
-main.c
#
include
<stdlib.h>
#
include
<string.h>
#
include
<stdio.h>
#
include
"lists.h"
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
list_t
*head;
list_t
*
new
;
list_t
hello = {
"World"
,
5
,
NULL
};
size_t
n;

    head = &hello;
new
=
malloc
(
sizeof
(
list_t
));
if
(
new
==
NULL
)
    {
printf
(
"Error\n"
);
return
(
1
);
    }
new
->str =
strdup
(
"Hello"
);
new
->len =
5
;
new
->next = head;
    head =
new
;
    n =
print_list
(head);
printf
(
"-> %lu elements\n"
, n);
printf
(
"\n"
);
free
(
new
->str);
new
->str =
NULL
;
    n =
print_list
(head);
printf
(
"-> %lu elements\n"
, n);
free
(
new
);
return
(
0
);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
0
-main.c
0
-print_list.c -o a
julien@ubuntu:~/Singly linked lists$ ./a
[
5
] Hello
[
5
] World
->
2
elements

[
0
] (nil)
[
5
] World
->
2
elements
julien@ubuntu:~/Singly linked lists$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
singly_linked_lists
File:
0-print_list.c
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
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
0. Print list
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
Students who are done with "0. Print list"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>1. List length</summary>

**Files:**

- [`1-list_len.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/singly_linked_lists/1-list_len.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `singly_linked_lists`

**Task details:**

```text
1. List length
Write a function that returns the number of elements in a linked
list_t
list.
Prototype:
size_t list_len(const list_t *h);
julien@ubuntu:~/Singly linked lists$ cat
1
-main.c
#
include
<stdlib.h>
#
include
<string.h>
#
include
<stdio.h>
#
include
"lists.h"
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
list_t
*head;
list_t
*
new
;
list_t
hello = {
"World"
,
5
,
NULL
};
size_t
n;

    head = &hello;
new
=
malloc
(
sizeof
(
list_t
));
if
(
new
==
NULL
)
    {
printf
(
"Error\n"
);
return
(
1
);
    }
new
->str =
strdup
(
"Hello"
);
new
->len =
5
;
new
->next = head;
    head =
new
;
    n =
list_len
(head);
printf
(
"-> %lu elements\n"
, n);
free
(
new
->str);
free
(
new
);
return
(
0
);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
1
-main.c
1
-list_len.c -o b
julien@ubuntu:~/Singly linked lists$ ./b
->
2
elements
julien@ubuntu:~/Singly linked lists$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
singly_linked_lists
File:
1-list_len.c
Score of the task
8
/8
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
1. List length
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
Students who are done with "1. List length"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>2. Add node</summary>

**Files:**

- [`2-add_node.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/singly_linked_lists/2-add_node.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `singly_linked_lists`

**Task details:**

```text
2. Add node
Write a function that adds a new node at the beginning of a
list_t
list.
Prototype:
list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or
NULL
if it failed
str
needs to be duplicated
You are allowed to use
strdup
julien@ubuntu:~/Singly linked lists$ cat
2
-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
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
    list_t *head;

    head = NULL;
    add_node(&head,
"Alexandro"
);
    add_node(&head,
"Asaia"
);
    add_node(&head,
"Augustin"
);
    add_node(&head,
"Bennett"
);
    add_node(&head,
"Bilal"
);
    add_node(&head,
"Chandler"
);
    add_node(&head,
"Damian"
);
    add_node(&head,
"Daniel"
);
    add_node(&head,
"Dora"
);
    add_node(&head,
"Electra"
);
    add_node(&head,
"Gloria"
);
    add_node(&head,
"Joe"
);
    add_node(&head,
"John"
);
    add_node(&head,
"John"
);
    add_node(&head,
"Josquin"
);
    add_node(&head,
"Kris"
);
    add_node(&head,
"Marine"
);
    add_node(&head,
"Mason"
);
    add_node(&head,
"Praylin"
);
    add_node(&head,
"Rick"
);
    add_node(&head,
"Rick"
);
    add_node(&head,
"Rona"
);
    add_node(&head,
"Siphan"
);
    add_node(&head,
"Sravanthi"
);
    add_node(&head,
"Steven"
);
    add_node(&head,
"Tasneem"
);
    add_node(&head,
"William"
);
    add_node(&head,
"Zee"
);
    print_list(head);
return
(
0
);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
2
-main.c
2
-add_node.c
0
-print_list.c -o c
julien@ubuntu:~/Singly linked lists$ ./c
[
3
] Zee
[
7
] William
[
7
] Tasneem
[
6
] Steven
[
9
] Sravanthi
[
6
] Siphan
[
4
] Rona
[
4
] Rick
[
4
] Rick
[
7
] Praylin
[
5
] Mason
[
6
] Marine
[
4
] Kris
[
7
] Josquin
[
4
] John
[
4
] John
[
3
] Joe
[
6
] Gloria
[
7
] Electra
[
4
] Dora
[
6
] Daniel
[
6
] Damian
[
8
] Chandler
[
5
] Bilal
[
7
] Bennett
[
8
] Augustin
[
5
] Asaia
[
9
] Alexandro
julien@ubuntu:~/Singly linked lists$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
singly_linked_lists
File:
2-add_node.c
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
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
2. Add node
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
Students who are done with "2. Add node"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>3. Add node at the end</summary>

**Files:**

- [`3-add_node_end.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/singly_linked_lists/3-add_node_end.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `singly_linked_lists`

**Task details:**

```text
3. Add node at the end
Write a function that adds a new node at the end of a
list_t
list.
Prototype:
list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or
NULL
if it failed
str
needs to be duplicated
You are allowed to use
strdup
julien@ubuntu:~/Singly linked lists$ cat
3
-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
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
    list_t *head;

    head = NULL;
    add_node_end(&head,
"Anne"
);
    add_node_end(&head,
"Colton"
);
    add_node_end(&head,
"Corbin"
);
    add_node_end(&head,
"Daniel"
);
    add_node_end(&head,
"Danton"
);
    add_node_end(&head,
"David"
);
    add_node_end(&head,
"Gary"
);
    add_node_end(&head,
"Holden"
);
    add_node_end(&head,
"Ian"
);
    add_node_end(&head,
"Ian"
);
    add_node_end(&head,
"Jay"
);
    add_node_end(&head,
"Jennie"
);
    add_node_end(&head,
"Jimmy"
);
    add_node_end(&head,
"Justin"
);
    add_node_end(&head,
"Kalson"
);
    add_node_end(&head,
"Kina"
);
    add_node_end(&head,
"Matthew"
);
    add_node_end(&head,
"Max"
);
    add_node_end(&head,
"Michael"
);
    add_node_end(&head,
"Ntuj"
);
    add_node_end(&head,
"Philip"
);
    add_node_end(&head,
"Richard"
);
    add_node_end(&head,
"Samantha"
);
    add_node_end(&head,
"Stuart"
);
    add_node_end(&head,
"Swati"
);
    add_node_end(&head,
"Timothy"
);
    add_node_end(&head,
"Victor"
);
    add_node_end(&head,
"Walton"
);
    print_list(head);
return
(
0
);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
3
-main.c
3
-add_node_end.c
0
-print_list.c -o d
julien@ubuntu:~/Singly linked lists$ ./d
[
4
] Anne
[
6
] Colton
[
6
] Corbin
[
6
] Daniel
[
6
] Danton
[
5
] David
[
4
] Gary
[
6
] Holden
[
3
] Ian
[
3
] Ian
[
3
] Jay
[
6
] Jennie
[
5
] Jimmy
[
6
] Justin
[
6
] Kalson
[
4
] Kina
[
7
] Matthew
[
3
] Max
[
7
] Michael
[
4
] Ntuj
[
6
] Philip
[
7
] Richard
[
8
] Samantha
[
6
] Stuart
[
5
] Swati
[
7
] Timothy
[
6
] Victor
[
6
] Walton
julien@ubuntu:~/Singly linked lists$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
singly_linked_lists
File:
3-add_node_end.c
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
Select a repository…
Folder (optional)
Run the correction
Get a sandbox
QA Review
×
3. Add node at the end
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
Students who are done with "3. Add node at the end"
×
Recommended Sandboxes
Loading...
```

</details>

<details>
<summary>4. Free list</summary>

**Files:**

- [`4-free_list.c`](https://github.com/Antgst/holbertonschool-low_level_programming/blob/main/singly_linked_lists/4-free_list.c)

**Repository:** `holbertonschool-low_level_programming`

**Directory:** `singly_linked_lists`

**Task details:**

```text
4. Free list
Write a function that frees a
list_t
list.
Prototype:
void free_list(list_t *head);
julien@ubuntu:~/Singly linked lists$
cat
4-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *
head
;
head
= NULL;
    add_node_end(&
head
,
"Bob"
);
    add_node_end(&
head
,
"&"
);
    add_node_end(&
head
,
"Kris"
);
    add_node_end(&
head
,
"love"
);
    add_node_end(&
head
,
"asm"
);
    print_list(
head
);
    free_list(
head
);
head
= NULL;
return
(0);
}
julien@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
julien@ubuntu:~/Singly linked lists$ valgrind ./e
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL
'd, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598==
[3] Bob
[1] &
[3] Kris
[4] love
[3] asm
==3598==
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598==
==3598== All heap blocks were freed -- no leaks are possible
==3598==
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Singly linked lists$
Repo:
GitHub repository:
holbertonschool-low_level_programming
Directory:
singly_linked_lists
File:
4-free_list.c
Score of the task
8
/8
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
4. Free list
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
Students who are done with "4. Free list"
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
