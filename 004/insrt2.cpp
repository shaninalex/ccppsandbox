#include <iostream>

int main()
{

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    std::cout << "Enter your name:\n";
    std::cin.get(name, ArSize).get();
    std::cout << "Enter yoru favorite desert:\n";
    std::cin.get(dessert, ArSize).get();

    std::cout << "I have some delicious " << dessert;
    std::cout << " for you, " << name << ".\n";

    return 0;
}