#include <iostream>
#include <cstring>

using namespace std;

char a[] = "Testing";

void reverse(char x[])
{
	int n = strlen(x) / 2;
	for (int i = 0;i<n;i++)
	{
		char t = x[i];
		x[i] = x[(strlen(x)-1) - i];
		x[(strlen(x)-1) - i] = t;
		
	}
	cout << x;
}

int main()
{
	
	reverse(a);
	
}