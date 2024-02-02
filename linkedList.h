//
// Created by mo_ on 01/02/24.
//

#ifndef UNIVERSITY_AAD_LINKEDLIST_H
#define UNIVERSITY_AAD_LINKEDLIST_H


// Node structure
//typedef struct Node_s {
//   int data;
//   struct Node_s *next;
//} Node_t;

// Linked list structure
typedef struct LinkedList_s {
    int data;
    struct LinkedList_s *next;
} LinkedList_t;

// Function prototypes
LinkedList_t* createNode(int data);
void purge(LinkedList_t **list);
void insertAtBeginning(LinkedList_t **list, int data);
void insertAtEnd(LinkedList_t **list, int data);
void find(LinkedList_t **list, int key);
void headExtraction(LinkedList_t **list);
void tailExtraction(LinkedList_t **list);

void printList(LinkedList_t *list);


#endif
