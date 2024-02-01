//
// Created by mo_ on 01/02/24.
//

#include "linkedList.h"
#include <stdlib.h>


LinkedList_t* create() {
    LinkedList_t *list = (LinkedList_t*)malloc(sizeof(LinkedList_t));
    if (list != NULL) {
        list->head->data = 4;
        list->head->next = NULL;
    }
    return list;
}


void purge(LinkedList_t *list) {

}

void insertAtBeginning(LinkedList_t *list, int data) {

}

void insertAtEnd(LinkedList_t *list, int data) {

}
