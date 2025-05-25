#include <iostream>
using namespace std;

int main()
{
    int a;
    int b = sizeof(a); // in bytes.
    cout << b << endl;
    // codes for converting bytes into bits.
    int c = b * 8;
    cout << c;
    return 0;
}