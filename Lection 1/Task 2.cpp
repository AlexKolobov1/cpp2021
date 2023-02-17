#include <iostream>
#include <string>
using namespace std;
int a = 2;
float b = 2.5;
char c = 6;
float res = 0;
string str = "Proizvedenie a b c : ";
int main()
{
    res = ((a * b) / c) + (6 % 4);
    std::cout << str;
    std::cout << res;
}