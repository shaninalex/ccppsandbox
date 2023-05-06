#include <iostream>
#include <string>

struct Name
{
    std::string first;
    std::string last;
};

int main()
{
    Name name;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, name.first);

    std::cout << "Enter your last name: ";
    std::getline(std::cin, name.last);

    std::cout << name.first << ", " << name.last << std::endl;

    return 0;
}