# 0x17. C - Doubly Linked Lists

## Table of Content

* [Introduction](#introduction)
* [Syntax](#syntax)
* [Working principle](#working-of-a-doubly-linked-list)
* [Advantages over singly linked lists](#advantages-of-dll-over-the-singly-linked-list)
* [Disadvantages with respect to singly linked lists](#disadvantages-of-dll-over-the-singly-linked-list)
* [Applications](#applications-of-dll)
* [Real-Time Applications](#real-time-applications-of-dll)
* [Acknowledgement](#acknowledgement)

## Introduction

A doubly linked list is a type of linked list in which nodes
contains information and two pointers i.e. left pointer and right pointer.
The left pointer in the doubly linked list points to the previous node
and the right pointer points to the next node in the linked list.

The first node of the doubly linked list has NULL in its left pointer and
the last node of the doubly linked list has NULL in its right pointer.
It is also known as a two-way linked list as there are two pointers.
The benefit of this doubly linked list is that now we can navigate in both directions.

Also, we can delete a node without containing the previous node’s address
as every node has a left pointer that points to its previous node.

## Syntax

In C, the node of a doubly-linked list is represented as:

```C
// Node of a doubly linked list

struct Node {
 int data;

 // Pointer to next node in DLL
 struct Node *next;

 // Pointer to previous node in DLL
 struct Node *prev;
};

```

## Working of a doubly linked list

A Doubly linked list node contains three fields:

* Left pointer,  
* Information and
* Right pointer.

The left pointer points to the node which is before the current node
and the right pointer points to the node after the current node.
A doubly linked list allows backward traversing if required.
All other functions are similar to linked list.

It is different from the normal linked list by allowing the bidirectional traversal
which in turn reduces the time complexity of any operation.

## Advantages of DLL over the singly linked list

* A DLL can be traversed in both forward and backward directions.
* The delete operation in DLL is more efficient if a pointer to the node to be deleted is given.
* We can quickly insert a new node before a given node.
* In a singly linked list, to delete a node, a pointer to the previous node is needed.
To get this previous node, sometimes the list is traversed.
In DLL, we can get the previous node using the previous pointer.

## Disadvantages of DLL over the singly linked list

* Every node of DLL Requires extra space for a previous pointer.
(It is possible to implement DLL with a single pointer though).
* All operations require an extra pointer previous to be maintained.
For example, in insertion, we need to modify previous pointers together with the next pointers.
For example in the following functions for insertions at different positions,
we need 1 or 2 extra steps to set the previous pointer.

## Applications of DLL

* Doubly linked list can be used in navigation systems
where both forward and backward traversal is required.
* It can be used to implement different tree data structures.
* It can be used to implement undo/redo operations.

## Real-Time Applications of DLL

* Doubly linked lists are used in web page navigation in both forward and backward directions.
* It can be used in games like a deck of cards.

## Acknowledgement

The content of this README was inspired by this
[GeeksForGeeks article](https://www.geeksforgeeks.org/introduction-and-insertion-in-a-doubly-linked-list/ "GeeksForGeeks").
