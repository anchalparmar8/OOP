#include<iostream>
using namespace std;

class DB;

class DM{
    private:
        int meters;
        int centimeters;
    public:
    DM() : meters(0), centimeters(0){}
    DM(int m, int cm): meters(m),centimeters(cm){}
    void read(){
        cout<<"Enter distance in meters and centimeters:";
        cin >>meters>>centimeters;
    }
    void display() const{
        cout<<"Distance:" <<meters<< "meters"<< centimeters<<"centimeters"<<endl;
    }

    friend DM add(const DM&, constDB&);
};

class DB{
    private:
        int feet;
        int inches;
    public:
    DB() : feet(0), inches(0) {}
    DB (int f, int in): feet(f), inches(in) {}
    void read(){
        cout<< "Enter distance in feet and inches:";
        cin>> feet>> inches;
    }

    void display() const{
        cout<<"Distance:"<<feet<"feet"<<inches<<"inches"<<endl;
    }

    friend DM add(const DM&, const DB&);
};

DM add(const DM& d1,const DB& d2){
    double total_cm_d2 = d2.feet * 12* 2.54 + d2.inches *2.54;
    double total_cm_d1 =d1.meters * 100 +d1.centimeters;
    double total_cm = total_cm_d1+ total_cm_d2;
}
DM add(const DM& d1,const DB& d2){
    int meters = static_cast<int>(total_cm /100);
    int centimeters = static_Cast<int>(total_cm) % 100;

    return DM(meters, centimeters);
}

int main(){
    DM dm;
    DB db;

    dm.read();
    db.read();

    DM result = add(dm,db);
    cout<< "\nResult(in meters and centimeters):\n";
    result.display();
}