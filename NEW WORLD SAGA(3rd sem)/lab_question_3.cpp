#include<iostream>
using namespace std;

class Customers{
    long long account_number;
    long long balance_amount;
    string PAN_number;
public:
    Customers(){}
    Customers(long long acc,long long bal,string pan): account_number(acc), balance_amount(bal), PAN_number(pan){}
    Customers(Customers &obj){
        this->account_number = obj.account_number;
        this->balance_amount = obj.balance_amount; 
        this->PAN_number = obj.PAN_number;
    }
    void show(){
        cout << "Account Number: " << account_number << endl 
             << "Balance Amount: " << balance_amount << endl
             << "PAN: " << PAN_number << endl;
    }
    ~Customers(){}
};


int main(){
    // Customers VIP[25];
    Customers Liron(4010023441,1000000,"QFG4G4GQP");
    Liron.show();
    return 0;
}