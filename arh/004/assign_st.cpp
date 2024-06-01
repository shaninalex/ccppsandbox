#include <iostream>
#include <string>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

struct torgle_register
{
    unsigned int SN : 4;
    unsigned int : 4;
    bool goodIn : 1;
    bool goodTrgle : 1;
};

struct perks
{
    int key_number;
    std::string car;
} mr_smith, ms_jones;

int main()
{
    inflatable bouquet = {"sunfkiwers", 0.20, 12.49};
    inflatable choice;

    std::cout << "bouguet: " << bouquet.name << " for $";
    std::cout << bouquet.price << std::endl;

    choice = bouquet;

    std::cout << "choice: " << choice.name << " for $";
    std::cout << choice.price << std::endl;

    mr_smith.key_number = 2;
    mr_smith.car = "test1";

    ms_jones.key_number = 32;
    ms_jones.car = "tes3423t1";

    std::cout << mr_smith.key_number << ":" << mr_smith.car << std::endl;
    std::cout << ms_jones.key_number << ":" << ms_jones.car << std::endl;

    struct parts
    {
        int number;
        std::string name;
    } enginge = {23, "main"};

    std::cout << enginge.number << ":" << enginge.name << std::endl;

    return 0;
}