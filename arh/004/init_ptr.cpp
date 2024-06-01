#include <iostream>

int main()
{
    int higgens = 5;
    int *pt = &higgens;

    std::cout << "Value of higgens = " << higgens << ", Address of higgens = " << &higgens << std::endl;
    std::cout << "Value of pt = " << *pt << ", Address of pt = " << &pt << ", References to address: " << pt << std::endl;

    return 0;
}