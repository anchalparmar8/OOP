#include<iostream>
 using namespace std;

 void greet(string s = "Guest")
 {
     cout<<"hello "<<s<<endl;
 }
 int main(){
     string name;
     cout<<"enter a name : ";
     cin>>name;
     greet(name);
     greet();
     return 0;
 }
