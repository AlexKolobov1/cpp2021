#include <iostream>
#include <string>
using namespace std;
int i = 0;
int sum = 0;
int ostatok = 0;
int main()
{
	while (i < 1000)
	{
		ostatok = i % 7;
		if (ostatok == 0)
		{
			sum = sum + i;
		}
		i=i+4;
	}
	cout << sum;
}