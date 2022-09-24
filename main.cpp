#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a1, a2, a3, u;
    double r;
    std::cin >> a1 >> a2 >> a3;
    u = 3600*a1 + 60*a2 + a3;
    r=(u*2*M_PI)/1296000;
    std::cout << r << endl;
    return 0;

}
