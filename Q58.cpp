//58.	Write a C++ program to print a pyramid pattern using nested for loops.
#include<iostream>
using namespace std;
int main(){
   for(int i=0;i<=5;i++){
   	for(int j=i;j<=5;j++){
	   cout<<" ";
       }
   	   for(int k=1;k<=i;k++){
		  cout<<"* ";	    
		  }
		  cout<<endl;
	}
   return 0;
}

