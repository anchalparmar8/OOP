#include<iostream>
using namespace std;

class BankAccount
{
    private:
    string name;
    string accountNumber;
    string accountType;
    double balance;
    public:
    BankAccount(string n, string accNumber, string acctype, double bal=0.0){
        name=n;
        accountNumber=accNumber;
        balance=bal;
    }
    void deposite(double amount)
    {balance=amount;
    cout<<"deposite$"<<amount<<"now balance :$"<< balance<<endl;
}
void withdraw(double amount){
    if(amount > balance)

    {
        cout<<"insufficient funds"<<endl;
    }
    else{
        balance==amount;
        cout<<"withdraw"<<amount<<"Now balance:$"<<balance<<endl;
    }
}
    void displayDetails()
    {
        cout<<"Account Holder:"<<name<<endl;
        cout<<"Account Type:"<<accountType<<endl;
        cout<<"balance;$"<<balance<<endl;
    }
};
int main()
{
    BankAccount account("Anchal", "3818284590", "current", 18670.00);
    account. deposite(5000.00);
    account. withdraw(3000.00);
    account. displayDetails();
}