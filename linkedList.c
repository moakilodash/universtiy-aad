//
// Created by mo_ on 01/02/24.
//

#include "linkedList.h"
#include <stdlib.h>
#include <stdio.h>


LinkedList_t* createNode(int data) {
    LinkedList_t *list = (LinkedList_t*) malloc(sizeof(LinkedList_t));
    if (list == NULL) {
        fprintf(stderr, "Memory allocation error.\n");
        exit(EXIT_FAILURE);
    }
    list->data = data;
    list->next = NULL;
    return list;
}


void insertAtBeginning(LinkedList_t **head, int data) {
    LinkedList_t *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void printList(LinkedList_t *list) {
    while (list != NULL) {
        fprintf(stdout, "-> %d ", list->data);
        list = list->next;
    }
    fprintf(stderr, "-> X\n");
}

void purge(LinkedList_t **head) {
    LinkedList_t *p, *q = (*head)->next;
    while (q->next != NULL) {
        p = *head;
        *head = q;
        free(p);
        p = NULL;
        q = (*head)->next;
    }
    free(q);
    free(*head);
    q = NULL;
    *head = NULL;
}

void insertAtEnd(LinkedList_t **head, int data) {
    LinkedList_t *newNode = createNode(data), *p = *head;
    if (*head == NULL){
        *head = newNode;
        return;
    }
    while (p->next != NULL){
            p = p->next;
    }
    p->next = newNode;
}

void find(LinkedList_t **head, int key) {
    while (*head != NULL) {
        if ((*head)->data == key) {
            fprintf(stdout, "\nElement found.");
            return;
        }
        *head = (*head)->next;
    }
    fprintf(stdout, "\nElement not found.");
}

void headExtraction(LinkedList_t **head) {
    LinkedList_t *p = (*head)->next;
    free(*head);
    *head = p;
}

void tailExtraction(LinkedList_t **head) {
    LinkedList_t *p = *head, *q = NULL;
    q = p->next;
    while (p != NULL && q != NULL) {
        if (p->next == NULL) {
            q->next = p->next;
        }
        if (q->next == NULL) {
            p->next = q->next;
        }
        p = p->next;
        q = q->next;
    }
    free(q);
    q = NULL;
}