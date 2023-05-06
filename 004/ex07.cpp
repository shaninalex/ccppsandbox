#include <iostream>
#include <string>

struct PizzaCompany
{
    std::string company_name;
    double diametr;
    int weight;
};

int main()
{
    PizzaCompany pc;

    std::cout << "Enter company name: " << std::endl;
    std::getline(std::cin, pc.company_name);
    std::cout << "Pizza diametr: " << std::endl;
    std::cin >> pc.diametr;
    std::cout << "Pizza Weight: " << std::endl;
    std::cin >> pc.weight;

    std::cout << "Pizza weight: " << pc.weight << std::endl;
    std::cout << "Pizza Company Name: " << pc.company_name << std::endl;
    std::cout << "Pizza diametr: " << pc.diametr << std::endl;

    return 0;
}