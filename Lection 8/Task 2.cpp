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

void Transfer(CreditCard &cc1, CreditCard &cc2, float v)
{

    if (!(cc1.number == cc2.number))
    {
       
        if (cc1.balance >= v)
        {
            cc1.Take(v);
            cc2.Put(v);
            cout << "Transfer sucsessfull.\n";
        }
        else
        {
            cout << "Transfer is not avaliable. Balance at " << cc1.number << " to low.\n";
        }
    }
    else 
    {
        cout << "Transfer is not avaliable. Two equal numbers.\n";
    }
}

int main()
{
    CreditCard Tinkoff(5674, 2.3);
    CreditCard Sber(5801, 157.6);
    Tinkoff.Status();
    Sber.Status();
    Transfer(Tinkoff, Sber, 100);
    Transfer(Sber, Sber, 100);
    Transfer(Sber, Tinkoff, 100);
    Tinkoff.Status();
    Sber.Status();
}