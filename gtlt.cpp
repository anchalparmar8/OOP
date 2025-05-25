#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter two numbers a and b : " << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is greater than " << b << endl;
    }
    else if (a < b)
    {
        cout << a << " is less than " << b << endl;
    }
    else
    {
        cout << "both the numbers are equal" << endl;
    }
    return 0;
}