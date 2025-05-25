#include<iostream>
using namespace std;
int fib(int n){
for(int i = 0; i < n; i++){
    if(n<=1){
        return n;
    }else{
        return fib(n-1)+fib(n-2);
    }
}
}
int main(){
    int num;                              // fibonacci = {0,1,1,2,3,5,8,13}
    cout<<"enter the number of terms : ";
    cin>>num;
    cout<<"the fibonacci series is "<<endl<<fib(num);
    return 0;
}