#include <iostream>
#include <string>


int main()
{
    char charr1[20];
    char charr2[] = "jaguar";

    std::string str1;
    std::string str2 = "jaguar";

    std::cout << "Enter a kind of feline: ";
    std::cin >> charr1;
    std::cout << "Enter another kind of feline: ";
    std::cin >> str1;

    std::cout << "Here are some felines:\n";
    std::cout << charr1 << " " << charr2 << " " 
                << str1 << " " << str2 << std::endl;

    std::cout << "The third letter in " << charr2 << " is " << charr2[2] << std::endl;
    std::cout << "The third letter in " << str2 << " is " << str2[2] << std::endl;

    std::cout << sizeof(charr2) << std::endl;
    std::cout << sizeof(str2) << std::endl;

    return 0;
}