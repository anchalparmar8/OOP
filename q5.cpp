#include<iostream>
 using namespace std;
 void swap (int *a, int *b){
     int temp = *a;
     *a = *b;
     *b = temp;
}
int main(){
    int a,b;
         cout<<"enter two number : "<<endl;
         cin>>a>>b;
         cout<<"the value of a is : "<<a<<endl;    
         cout<<"the value of b is : "<<b<<endl;    
         swap(a,b);
         cout<<"the value of a is : "<<a<<endl;    
         cout<<"the value of b is : "<<b<<endl;    
         return 0;
     }