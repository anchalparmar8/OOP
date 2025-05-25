#include<iostream>
using namespace std;
int swapVar(int a, int b);
int num;
int &variable(int n);
int main()
{
    variable(1);
    cout<<num;
}
int swapVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int &variable(int n){
    return num;
}
