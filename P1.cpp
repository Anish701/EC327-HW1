#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int z = 2;
    // z-- 1;
    int res = (z-- > z++ ? 4 : 0) * 0x100000000A + 2;

    cout << res << endl;
    return 0;
}