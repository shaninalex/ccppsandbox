#include "list.h"

int main() { 
    List* list = initializeList();

    addNode(list, 32);
    addNode(list, 42);
    addNode(list, 2);
    addNode(list, 3);
    
    traverseList(list);
    
    removeLastNode(list);
    traverseList(list);

    removeFirstNode(list);
    traverseList(list);

    return 0;
}
