#include <iostream>
#include <cstring>

using namespace std;

char a = 'g';
int x = 3;
int y = 5;
float z = 2.5;

void print(int a)
{
	cout << a << "\n";
}

void print(float a)
{
	cout << a << "\n";
}

void print(char a)
{
	cout << a << "\n";
}

void print(int a, int b)
{
	cout << a <<", " << b << "\n";
	
}

int main()
{
	
	print(a);
	print(x);
	print(z);
	print(x,y);
	
}