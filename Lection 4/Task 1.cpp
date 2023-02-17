#include <iostream>
#include <string>
using namespace std;
int n= 0;

string numbers[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


int main()
{
	cout << "Input number: ";
	cin >> n;
	cout << numbers[n];

}