#include "linkedList.h"
#include <stdio.h>

int main() {
    LinkedList_t *list = NULL;
    insertAtBeginning(&list, 4);;
    insertAtBeginning(&list, 5);
    insertAtBeginning(&list, 6);
    insertAtBeginning(&list, 7);
    insertAtEnd(&list, 321);
    insertAtBeginning(&list, 8);
//    headExtraction(&list);
    tailExtraction(&list);
    printList(list);
    printf("\n ---- \n");
//    find(&list, 6);
//    purge(&list);
//    find(&list, 6);
//    printf("\n ----");

    return 0;
}
