#include <iostream>

int main()
{
    std::cout << "what year was your house built?\n";
    int year;
    (std::cin >> year).get();

    std::cout << "what is it's street address?\n";
    char address[80];

    std::cin.getline(address, 80);

    std::cout << "Year built: " << year << std::endl;
    std::cout << "Year address: " << address << std::endl;
    std::cout << "Done!" << std::endl;

    return 0;
}