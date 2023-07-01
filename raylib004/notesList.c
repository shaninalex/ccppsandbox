#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "notesList.h"

List* initializeList()
{
    List* list = (List*)malloc(sizeof(List));
    return list;
}

void addNode(List *list, const char title[50], const char content[150])
{
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL)
    {
        fprintf(stderr, "Failed to allocate memory for Note\n");
        return;
    }

    strncpy(node->value.title, title, sizeof(node->value.title) - 1);
    node->value.title[sizeof(node->value.title) - 1] = '\0';

    strncpy(node->value.content, content, sizeof(node->value.content) - 1);
    node->value.content[sizeof(node->value.content) - 1] = '\0';

    node->value.index = rand() % 1000;
    node->value.created_at = time(NULL);
    node->next = NULL;

    if (list->head == NULL)
    {
        list->head = node;
    } 
    else
    {
        Node* current = list->head;
        while(current->next != NULL)
            current = current->next;
        current->next = node;
    }
}
