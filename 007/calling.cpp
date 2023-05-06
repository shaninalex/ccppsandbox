#include <iostream>

void simple();

int main()
{

    std::cout << "main() will call the simple () function:\n";
    simple();
    std::cout << "main() is finnished the simple () function:\n";

    return 0;
}

void simple()
{
    std::cout << "Calling simple();" << std::endl;
}