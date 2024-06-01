#include <iostream>

int main()
{
    int updates = 6;
    int *p_updates;

    p_updates = &updates;

    std::cout << &p_updates << ": " << *p_updates << std::endl;

    return 0;
}