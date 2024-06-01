#ifndef NOTES_LIST_H
#define NOTES_LIST H

#include <time.h>

typedef struct Note
{
    int index;
    char title[50];
    char content[150];
    time_t created_at;
} Note;

typedef struct Node
{
    Note value;
    struct Node* next;
} Node;

typedef struct List
{
    Node* head;
    int capacity;
} List;

List* initializeList();
void addNode(List* list, const char title[50], const char content[150]);
void removeNodeByIndex(List* list, int index);
void traverseList(List* list);

#endif /* NOTES_LIST_H */

