#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;

    public:
    void SetName(string n){name=n;}
    void SetAge(int a){age=a;}
    string GetName(){
        return name;
    }
    int GetAge(){
        return age;
    }
};

int main()
{
    Student p;
    p.SetName("Anchal");
    p.SetAge(18);
    cout<<"Name:"<<p.GetName()<<endl;
    cout<<"Age:"<<p.GetAge()<<endl;
    return 0;
}