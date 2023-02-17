#include <iostream>

using namespace std;

int a[] = {5, 6, 2, 4, 3, 7, 8, 9, 0, 1};

void Sort(int x[10])
{
	int done = 0;
	int i = 0;
	while(done < 2)
	{
		if (i == 9) { i = 0; done = done + 1;}
		
		if (a[i] <  a[i + 1])
		{
			
			int t = a[i];
			a[i] = a[i + 1];
			a[i + 1] = t;
			done = 0;
		}
		i = i + 1;
		
	}
}

int main()
{ 
	cout << "Massive:";
	for (int i = 0;i < 10;i++)
	{
		cout << a[i]<<" ";
	}
	cout << "\n";

	Sort(a);

	cout << "Sorted massive:";
	for (int i = 0;i < 10;i++)
	{
		cout << a[i] << " ";
	}
}
