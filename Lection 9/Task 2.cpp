#include <iostream>
#include <cstring>

using namespace std;
class CreditCard
{
public:
    string name;
    int number = 0;
    float balance = 0;

    CreditCard(int n, float b): number(n), balance(b) {}
   

    void Put(float plus) {
        balance = balance + plus;
    }

    void Take(float minus) {
        if(balance>minus)
        {
            balance = balance - minus;
        }
        else {
            cout << "The balance is low for this transaction.\n";
        }
    }
        
    void Status() 
    {   
       cout << "On your card #" << number << ": $" <<balance<< "\n"; 
    }
   
};

void operator + (CreditCard &cc1, CreditCard &cc2)
{
    cc1.Put(cc2.balance);
    cc2.balance=0;
   
}

int main()
{
    CreditCard Tinkoff(5674, 2.3);
    CreditCard Sber(5801, 157.6);
    Tinkoff.Status();
    Sber.Status();
    Sber + Tinkoff;
    Tinkoff.Status();
    Sber.Status();
    
}