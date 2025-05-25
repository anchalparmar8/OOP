class BankAccount {
    private:
        string accountHolderName;
        int accountNumber;
        float balance;
    public:
    BankAccount(string name, int accNo, float initialBalance){
        accountHolderName =name;
        balance = initialBalance;
        accountNumber = accNo.;
        cout<< "Account Created Successfully!\n";
    }
    void displayAccountDetails(){
        cout << "\nAccount Holder: "<< accountHolderName << endl;
        cout << "Account Number: "<< accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(float amount){
        balance += amount;
        cout << "Amount Deposited:" << amount << endl;
    }
    void withdraw(float amount){
        if(amount <= balance){
            balance -= amount;
            cout<< "Amount Withdrawn :" <<amount <<endl;
        }else{
            cout<< "Insufficient funds\n";
        }
    }

    void displayBalance(){
        cout<<"Current Balance:"<< balance<<endl;
    }
};

int main()
{
    BankAccount account("Anchal",987, 18870);
    account.displayAccountDetails();
    account1.deposit(4500);
    account1.withdraw(4000);
    account1.displayBalance();

    return 0;
}