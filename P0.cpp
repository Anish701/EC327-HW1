#include <iostream>
#include <string>
#include <cmath>
#include <limits>
using namespace std;

int infoWchar()
{
    cout << "For wchar_t:   MAX: " << WCHAR_MIN << "   MIN: " << WCHAR_MAX << endl;
    cout << sizeof(WCHAR_MAX) << endl;
}

int infoUnsignedInt()
{
    unsigned int x = 1;

    // When unsigned int becomes greater than MAX it goes back to 0
    while ((x + 1) != 0)
    {
        x++;
    }
    // Minimum of unsigned int by definition is 0 (because it is unsigned)
    unsigned int y = 0;

    cout << "For Unsigned Int   MAX: " << x << "   MIN: " << y << endl;
    cout << "Number of Bytes is: " << sizeof(x) << "   Number of Bits is: " << sizeof(x) * 8 << endl;
    return 0;
}

int infoUnsignedLong()
{
    unsigned long int x = 1;
    while ((x + 1) != NULL)
    {
        x++;
    }
    // Minimum of unsigned long by definition is 0
    unsigned long int y = 0;
    cout << "For Unsigned Long   MAX: " << x << "   MIN: " << y << endl;
    return 0;
}

int infoFloat()
{
    // float x = 1;
    // float adder = .1;
    // while (x != (x + adder))
    // {
    //     x += adder;
    //     adder /= 10;
    //     cout << x << endl;
    // }

    cout << "For Float   MAX: " << numeric_limits<float>::max() << "   MIN: " << numeric_limits<float>::min() << endl;
    return 0;
}

int infoDouble()
{
    cout << "For Float   MAX: " << numeric_limits<double>::max() << "   MIN: " << numeric_limits<double>::min() << endl;
    return 0;
}

int main()
{
    infoWchar();
    infoUnsignedInt();
    infoUnsignedLong();
    infoFloat();
    infoDouble();
    return 0;
}