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
            cout << "The balance is low for this transaction.";
        }
    }
        
    void Status() 
    {   
       cout << "On your card #" << number << ": $" <<balance<< "\n"; 
    }
   
};

int main()
{
    CreditCard Tinkof(5674, 2.3);
    Tinkof.Status();
    Tinkof.Put(56.5);
    CreditCard* testpointer = &Tinkof;
    testpointer->Status();
}