# 0x12. C - Singly linked lists

A linked list is a linear data structure just like arrays.
But unlike arrays, the elements of a linked list are not
stored at a contiguous location.
The elements are linked using pointers.
Linked lists include a series of connected nodes, and each node stores
data and the address of the next node.

## Advantages of Linked Lists over arrays

- Linked lists are dynamic.
- Ease of insertion/deletion.

## Disadvantages of Linked Lists

- Random access is not allowed. Elements are to be accessed sequentially starting from the head node.
- Extra memory space for a pointer is required with each element of the list.
- Not cache friendly.

## Types of Linked Lists

- Simple Linked List – In this type of linked list, one can move or traverse the linked list in only one direction.
- Doubly Linked List – one can move or traverse the linked list in both directions (Forward and Backward).
- Circular Linked List – In this type of linked list, the last node of the linked list contains the link of the head node of the linked list in its next pointer and the head node contains the link of the last node of the linked list in its previous pointer.

## Representation of Linked Lists

A linked list is represented by a pointer to the first node of the linked list.
The first node is called the `head` of the linked list.
If the linked list is empty, then the value of the head points to `NULL`.
Each node in a list consists of at least two parts:

- A Data Item (we can store integer, strings, or any type of data).
- Pointer (Or Reference) to the next node (connects one node to another) or An address of another node.

In C, we can represent a node using structures. Below is an example of a linked list node with integer data.

```C
/* A linked list node */
struct Node {
 int data;
 struct Node* next;
};
```

Construction of a simple linked list with 3 nodes:

```C
#include <stdio.h>
#include <stdlib.h>

struct Node {
 int data;
 struct Node* next;
};

int main()
{
 struct Node* head = NULL;
 struct Node* second = NULL;
 struct Node* third = NULL;

 /* allocate 3 nodes in the heap */
 head = (struct Node*)malloc(sizeof(struct Node));
 second = (struct Node*)malloc(sizeof(struct Node));
 third = (struct Node*)malloc(sizeof(struct Node));

 /* Three blocks have been allocated dynamically.
 We have pointers to these three blocks as head,
 second and third
     head        second       third
      |            |            |
      |            |            |
 +----+----+  +----+----+  +----+----+
 | #  | #  |  | #  | #  |  | #  | #  |
 +----+----+  +----+----+  +----+----+

# represents any random value.
Data is random because we haven’t assigned
anything yet */

 head->data = 1;        /* assign data in first node */
 head->next = second;   /* Link first node with the second node */

 /* data has been assigned to the data part of the first
 block (block pointed by the head). And next
 pointer of first block points to second.
 So they both are linked.

     head          second       third
      |              |            |
      |              |            |
 +----+----+    +----+----+  +----+----+
 | 1  | o------>| #  | #  |  | #  | #  |
 +----+----+    +----+----+  +----+----+
*/

 /* assign data to second node */
 second->data = 2;

 /* Link second node with the third node */
 second->next = third;

 /* data has been assigned to the data part of the second
 block (block pointed by second). And next
 pointer of the second block points to the third
 block. So all three blocks are linked.

     head         second        third
      |             |             |
      |             |             |
 +----+----+   +----+----+   +----+----+
 | 1  | o----->| 2  | o----->| #  | #  |
 +----+----+   +----+----+   +----+----+  */

 third->data = 3; /* assign data to third node */
 third->next = NULL;

 /* data has been assigned to data part of third
 block (block pointed by third). And next pointer
 of the third block is made NULL to indicate
 that the linked list is terminated here.

 We have the linked list ready.

      head
       |
       |
  +----+----+    +----+----+  +----+-----+
  | 1  | o------>| 2  | o---->| 3  | NULL|
  +----+----+    +----+----+  +----+-----+


 Note that only head is sufficient to represent
 the whole list. We can traverse the complete
 list by following next pointers. */

 return 0;
}

```

Time Complexity for a Linked List:

| Time complexity | Worst Case | Average Case |
|-----------------|------------|--------------|
|      Search     |     O(n)   |    O(n)      |
|     Insertion   |     O(1)   |    O(1)      |
|     Deletion    |     O(1)   |    O(1)      |
