#include <iostream>
#include <array>
#include <vector>

int main()
{
    std::array<double, 3> results;
    short res = 0;
    int sum = 0;
    while (res < 3)
    {
        std::cin >> results[res];
        sum += results[res];
        res++;
    }

    std::cout << "Summary: " << sum / 3 << std::endl;

    return 0;
}