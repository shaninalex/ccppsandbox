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
    CandyBar snacks[3] = {
        {"Mocha Munch1", 2.0, 750},
        {"Mocha Munch2", 3.6, 450},
        {"Mocha Munch3", 4.3, 250},
    };

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Snack #" << i + 1 << std::endl;
        std::cout << "Name: " << snacks[i].name << std::endl;
        std::cout << "weight: " << snacks[i].weight << std::endl;
        std::cout << "Callories: " << snacks[i].callories << std::endl;
    }

    return 0;
}