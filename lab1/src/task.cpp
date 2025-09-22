#include <iostream>
#include "task.h"

int find_max_dividend(int devider, int bound)
{
    if (devider > bound) 
    {
        return -1;
    }

    int result = devider * (bound / devider);
    
    return result;
}