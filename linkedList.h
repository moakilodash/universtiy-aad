//
// Created by mo_ on 01/02/24.
//

#ifndef UNIVERSITY_AAD_LINKEDLIST_H
#define UNIVERSITY_AAD_LINKEDLIST_H


// Node structure
typedef struct Node_s {
   int data;
   struct Node_s *next;
} Node_t;

// Linked list structure
typedef struct LinkedList_s {
   Node_t *head;
} LinkedList_t;

// Function prototypes
LinkedList_t* create();
void purge(LinkedList_t *list);
void insertAtBeginning(LinkedList_t *list, int data);
void insertAtEnd(LinkedList_t *list, int data);


#endif
