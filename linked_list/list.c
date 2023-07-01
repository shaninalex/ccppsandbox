#include "list.h"
#include <stdio.h>
#include <stdlib.h>

List *initializeList()
{
    List *list = malloc(sizeof(List));
    return list;
}

void addNode(List *list, const int value)
{
    // create node
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;

    // link node to list
    if (list->head == NULL)
    {
        list->head = node;
    }
    else
    {
        Node *current = list->head;
        while (current->next != NULL)
            current = current->next;
        current->next = node;
    }
    list->capacity++;
}

void removeLastNode(List *list)
{
    if (list->head == NULL) return;
   
    if (list->head->next == NULL)
    {
        free(list->head);
        list->head = NULL;
        list->capacity = 0;
        return;
    }

    // traverse to second-to-last Node
    Node *current = list->head;
    while(current->next->next != NULL)
        current = current->next;

    free(current->next);
    current->next = NULL;
    list->capacity--;
}

void removeFirstNode(List *list)
{
    if (list->head == NULL) return;
    Node* first = list->head;
    list->head = list->head->next;
    free(first);
    list->capacity--;
}

void traverseList(List *list)
{
    Node *current = list->head;
    
    printf("List cap.: %d\n%d\n", list->capacity, current->value);
    while (current->next != NULL)
    {
        current = current->next;
        printf("%d\n", current->value);
    }
}
