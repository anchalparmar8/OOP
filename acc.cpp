class Account{
    protected:
        string name;
        int accno;
        string acctype;
        float balance;
    public:
        void createAccount(string n,int no,string type, float bal){
            name=n;
            accno= no;
            acctype=type;
            balance=bal;
        }
        void deposite(float amount){
            balance+= amount;
            cout << "Amount deposited successfully.\n";
        }

        void displayBalance() const{
            cout<<"Name: "<<name<<"\nAccount Number: "<<accno<<"\nAccountType: "<<acctype<<"\nBalance: "<<balance<<endl;
        }

        virtual void withdraw(float)=0;
};

class SavAcct : public Account{
    public:
        void computeInterest(float rate, int years){
            float interest = balance*pow(1+ rate/ 100,years)-balance;
            balance+=interest;
            cout<<"Interest of "<< interest<<" added to account.\n";
        }
        
        void withdraw(float amount) override{
            if(amount<= balance){
                balance-= amount;
                cout<<"Wuthdrawl successful.\n";
            } else{
                cout<<"Insufficient funds.\n";
            }
        }
};

class CurAcct : public Account{
    const float min_balance = 100;
    const float penalty = 50;

    public:
        void withdraw(float amount) override{
            if(amount <= balance){
                balance -= amount;
                cout<<"Withdrawl successful.\n";
                checkMinimumBalance();
            } else{
                cout<<"Insufficient funds \n";
            }
        }

        void checkMininmumBalnce(){
            if(balance<min_balance){
               balance -= penalty;
               cout<<"Minimum balance not maintained. Penalty of "<<penalty<<"imposed.\n";
            }
        }
    };

    int main()
{
    SavAcct s;
    CurAcct c;

    s.displayBalance();
    s.deposite(700);
    s.computeInterest(3,4);
    s.withdraw(1000);
    s.displayBalance();

    cout<<"\n----Current Account ----\n";
    c.displayBalance();
    c.deposite(500);
    c.withdraw(400);
    c.displayBalance();

    return 0;
}