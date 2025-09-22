#include <iostream>
#include "task.h"

int main(int argc, char *argv[])
{
    int devider, bound;
    std::cin >> devider >> bound;

    int result = find_max_dividend(devider, bound);
    if (result == -1)
    {
        std::cout << "Devider has to be less or equal to bound";
        return 1;
    }

    std::cout << "The max dividend is " << result;
}