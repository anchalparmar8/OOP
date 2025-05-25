class Book{
private:
    string title;
    string author;
    string publisher;
    float price;
    int stock;

    public:
    Book(string t,string a, string p, float pr,int s){
        title= t;
        author= a;
        publisher=p;
        price=pr;
        stock=s;
    }
    void displayDetails(){
        cout<< "Title: "<< title <<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Publisher:"<<publisher<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Stock"<<stock<<endl;
    }

    bool checkStock(int quantity){
        retuen quantity<=stock;
    }
    void updateStock(int quantity){
        return quantity<=stock;
    }

    void updateStock(int quantity){
        stock -= quantity;
    }
    float calculateTotalCost(int quantity){
        return price*quantity;
    }

    string getTitle(){
        return title;
    }

    string getAuthor(){
        return author;
    }
};

class BookShop{
    private:
        Book** inventory;
        int numBooks;
    
        public:
            BookShop(int num){
                numBooks = num;
                inventory = new Book*[numBooks];
            }
    
    ~BookShop(){
        for(int =0; i < numBooks; i++){
            delete inventory[i];
        }
        delete[] inventory;
    }
    void addBook(int index,string title,string author,string publisher, float price, int stock){
        inventory[index] = new Book(title,author,publisher,price,stock);
    }

    Book*searchBook(string title, string author){
        for(int i=0;i<numBooks; i++){
            if(inventory[i]->getTitle() == title && inventory[i]-> getAuthor() == author){
                return inventory[i];
            }
        }
        return nullptr;
    }
};


int main(){
    BookShop shop(3);

    shop.addBook(0, " Physics","Bjrane Stroustrup", "Addison-Wesley", 180,20);
    shop.addBook(1,"Chemistry","Scott Meyers", "O'Reily Media", 170,10);
    string title,author;
    cout<<"Enter the title of the book:";
    getline(cin,title);
    cout << "Enter the author of the book:";
    getline(cin,acuthor);
};
int main(){
Book* foundBook=shop.searchBook(title,author);
    if(founfBook==numptr)
{
    cout<<"Book not available.\n";
}   else{
    foundBook->displayDetails();

    int copies;
    cout<<"Enter the number of copies requires:";
    cin>> copies;
    
    if(foundBook->checkStock(copies)){
        float totalcost=foundBook->calculatetotalcost(copies);
        cout<<"Total cost for:"<<copies<<"copies"<<totalcost<<endl;
        foundBook->updateStock(copies);
        cout<<"Stock Updated!\n";
    }else{
        cout<<"Required copies are not in stock!\n";
    }
}
};