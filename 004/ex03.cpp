#include <iostream>

struct Name
{
    char first[20];
    char last[20];
};

int main()
{
    Name name;

    std::cout << "Enter your first name: ";
    std::cin >> name.first;

    std::cout << "Enter your first name: ";
    std::cin >> name.last;

    std::cout << name.first << ", " << name.last << std::endl;

    return 0;
}