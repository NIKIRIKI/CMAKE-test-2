#include <iostream>
#include <vector>
#include "../include/stats.h"
#include "../../LibMath/include/math.h"

double mean(std::vector<double> &arr, const int count)
{
    int sum = 0;

    for (size_t i = 0; i < count; i++)
    {
        sum = add(sum, arr[i]);
    }

    return static_cast<double>(sum / count);
}