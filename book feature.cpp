class Book{
    char*title;
    char*author;
    float price;
    int stock;

    void updatePrice(float newPrice){
        price=newPrice;
        cout<<"Price updated successfully.\n";
    }
    static int successfullTransactions;
public:
Book(const char* t,const char*a, float p, int s){
    title= newchar[strlen (t)+1];
    strcpy(author,a);

    price=p;
    stock=s;
}
~Book(){
    delete[]title;
    delete[]author;
}
bool search(const char* t , const char*a);{
    return strcmp(title, t) ==0 && strcmp(author,a) == 0
}
void display(){
    cout<<"\n Title:"<<title<<"\nAuthor:"<<author<<"\nPrice:"<<price<<"\nStock:"<<Stock<<endl;
}
void changePrice(float newPrice){
    updatePrice(newPrice);
}

void buy(int qty)
{
    if(qty<=stock)
    {
        float total = qty * price;
        stock -= qty;
        cout<<"Total cost: "<<total<<endl;
        successfulTransactions++;
    }else{
        cout<<"Required copies not in stock"<<endl;
    }
}

static void dispalyTransactionCount(){
    cout<<"Total successfull transactions: "<< successfullTransactions <<endl;
}
};


int main(){
    Book b1("Physics", "Rajesh Sethiya", 600,10);
    Book b2("Chemistry","Abhinav",80,5);

    char t[50],a[50];
    int qty;
    cout<<"Enter book title: ";
    cin>>getline(t,50);
    cout<<"Enter author: ";
    cin>>getline(a,50);

    if(b1.search(t,a)){
        b1.display();
        cout<<"Enter quantity to buy: "
        cin>> qty;
        b1.buy(qty);
        cout<<"Do you want to update price? (1 = yes, 0 = no): ";
        int ch;
        cin>> ch;
        if(ch==1){
            cout<<"Enter new price: "
            cin>> newPrice;
            b1.changePrice(newPrice);
            b1.display();
        }
    } else if (b2.search(t,a)) {
        b2.display();
        cout<<"Enter quantity to buy: ";
        cin>>qty;
        b2.buy(qty);
        out<<"Do you want to update price? (1 = yes, 0 = no): ";
        int ch;
        cin>> ch;
        if(ch==1){
            cout<<"Enter new price: "
            cin>> newPrice;
            b2.changePrice(newPrice);
            b2.display();
        }
    }else{
        cout<<"Book not available.\n";
    }

    Book::displayTransactionCount();
    return 0;
}