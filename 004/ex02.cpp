#include <iostream>
#include <string>

int main()
{

    std::string name;
    std::string dessert;

    std::cout << "Enter your name:\n";
    std::getline(std::cin, name);
    std::cout << "Enter yoru favorite desert:\n";
    std::cin >> dessert;

    std::cout << "I have some delicious " << dessert;
    std::cout << " for you, " << name << ".\n";

    return 0;
}