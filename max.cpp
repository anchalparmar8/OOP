#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;
    cout << "enter three numbers a, b, c : " << endl;
    cin >> a >> b >> c;
    max = a;

    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    cout << "the maximum value among the three numbers is : " << max << endl;
    return 0;
}