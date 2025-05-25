class Shape {
    protected:
        double dim1;
        double dim2;
    
    public:
        void getData(double a,double b){
            dim1=a;
            dim2=b;
        }

        virtual void display_area(){
            cout<<"Area not defined for base class.\n";
        }
};

class Triangle: public Shape{
    public:
    void display_area() override{
        double area = 0.5*dim1*dim2;
        cout<<"Area of Triangle: "<<area<<endl;
    }
};

class Rectangle: public Shape{
    public:
            void display_area() override{
                double area = dim1*dim2;
                cout<<"Area of Rectangle: "<<area<<endl;
            }
};

int main() {
    Shape*s;
    Triangle*t;
    Rectangle*r;

    s=&t;
    s->getData(3,6);
    s->display_area():

    s=&r;
    s->getData(4,5);
    s->display_area();

    return 0;
}