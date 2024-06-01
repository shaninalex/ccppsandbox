#ifndef NOTES_LIST_H
#define NOTES_LIST H

typedef struct Node
{
    int value;
    struct Node* next;
} Node;

typedef struct List
{
    Node* head;
    int capacity;
} List;

List* initializeList();
void addNode(List* list, const int value);
void removeLastNode(List* list);
void removeFirstNode(List* list);
void traverseList(List* list);

#endif /* NOTES_LIST_H */
