#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    // For 0.375
    float flt1 = 0;
    float adder1 = 0.0001;
    while (flt1 < 0.375)
    {
        flt1 = flt1 + adder1;
    }
    flt1 = flt1 - adder1;
    cout << "The computer stores: " << flt1 << " instead of 0.375" << endl;

    // For 0.6
    float flt2 = 0;
    float adder2 = 0.0001;
    while (flt2 < 0.6)
    {
        flt2 = flt2 + adder2;
    }
    flt2 = flt2 - adder2;
    cout << "The computer stores: " << flt2 << " instead of 0.6" << endl;

    // For 0.984375
    float flt3 = 0;
    float adder3 = 0.01;
    while (flt3 < 984.375)
    {
        flt3 = flt3 + adder3;
    }
    flt3 = flt3 - adder3;
    flt3 /= 1000;
    cout << "The computer stores: " << flt3 << " instead of 0.984375" << endl;

    return 0;

    // float flt = 0;
    // while (flt < 300)
    // {
    //     flt = flt + 0.1;
    // }
    // cout << flt << endl;

    // return 0;
}