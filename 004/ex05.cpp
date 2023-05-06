#include <iostream>
#include <string>

struct CandyBar
{
    std::string name;
    double weight;
    int callories;
};

int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    std::cout << "Name: " << snack.name << std::endl;
    std::cout << "weight: " << snack.weight << std::endl;
    std::cout << "Callories: " << snack.callories << std::endl;

    return 0;
}