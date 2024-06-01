#include <iostream>

int main()
{
    int donuts = 6;
    double cups = 4.5;

    std::cout << "donuts value = " << donuts;
    std::cout << " and donut address = " << &donuts << std::endl;

    std::cout << "cups value = " << cups;
    std::cout << " and cups address = " << &cups << std::endl;

    return 0;
}
