#include<iostream>
using namespace std;
class Math{

    public:
    static int sum(int a, int b){
        return a+b;
    
    }
    static int diff(int a, int b){
        return a-b;
    
    }
    static int multi(int a, int b){
        return a*b;
    
    }
    static int divi(int a, int b){
        return a/b;
    
    }
    static int modulus(int a, int b){
        return a%b;
    
    }
    
};

int main(){
    int a=Math:: sum(4,5);
    cout<<a;
    return 0;
}