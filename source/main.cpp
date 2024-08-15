#include <iostream>
#include <vector>
#include "src/LibStat/include/stats.h"
#include "src/LibMath/include/math.h"

using std::cout, std::endl, std::vector;

int main()
{
    vector<double> arr{2.3, 4.4, 5.6, 7.7};

    cout << mean(arr, 3) << endl;
    cout << add(4, 5) << endl;

    return 0;
}