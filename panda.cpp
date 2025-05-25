#include <iostream>
using namespace std;
int main()
{
    int min, max;
panda:            
    cout << "enter the min value : ";
    cin >> min;
    cout << "enter the max value : ";
    cin >> max;
    if (min > max)
    {
        cout << "invalid input !" << endl;
        goto panda;  
    }
    for (int i = min; i < max; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}