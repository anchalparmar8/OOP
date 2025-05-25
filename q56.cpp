#include<iostream>
using namespace std;
class Car{
    private:
    string modelname;
    int year;

    public:
    void Setmodelname(string n ){modelname=n;}
    void Setyear(int a) {year=a;}
    string Getmodelname(){
        return modelname;
    }
    int Getyear(){
        return year;
    }

}; 

int main()
{
    Car p;
    p.Setmodelname("G63");
    p.Setyear(2018);
    cout<<"modelname:"<<p.Getmodelname()<<endl;
    cout<<"year:"<<p.Getyear()<<endl;
    return 0;
}