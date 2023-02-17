#include <iostream>
#include <string>
using namespace std;
int i = 0;
int ostatok = 0;
int main()
{
	for (i=0;i<=100;i++)
	{
		ostatok = i % 3;
		if (ostatok == 0)
		{
			std::cout << (i);
			std::cout << (" ");
		}
	}
}