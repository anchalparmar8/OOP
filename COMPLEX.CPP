class Complex{
    float real;
    float imag;
public:
    complex():real(0),imag(0){}
    Complex(float r, float i): real(r), imag(i){}
    Complex operator+(const Complex& c){
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(const Complex& c) {
        return Complex
            (real - c.real, imag - c.imag);
    }
    Complex operator*(const Complex& c){
        return Complex(
            real*c.real - imag*c.imag,
            real*c.imag + imag*c.real
        );
    }
    Complex operator/(const Complex& c){
        float denominator=c.real*c.real + c.imag*c.imag;
        return Complex(
            (real*c.real + imag*c.imag)/denominator,
            (imag*c.real - real*c.imag)/denominator
        );
    }

    void display() {
        cout<< real;
        if(imag>=0)
        cout<<"+"<<imag<<"i";
        else
        cout<< "-"<<-imag<<"i";
        cout<<endl;
    }
};

int main()
{
    Complex c1(8,9), c2(-5,4);

    cout<<"First Complex Number: ";
    c1.display();

    cout<<"Second Complex Number: ";
    c2.display();

    Complex sum=c1+c2;
    cout<<"\nSum: ";
    sum.display();

    Complex diff = c1-c2;
    cout<< "Difference: ";
    diff.display();

    Complex product = c1*c2;
    cout<<"Product: ";
    product.display();

    Complex divi =c1/c2;
    cout<<"Division: ";
    divi.display();
    
    return 0;
};