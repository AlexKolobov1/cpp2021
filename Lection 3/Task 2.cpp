#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int a = 0;
int b = 0;
int i = 0;
int k = 1;
string x = "0";


ifstream potok;


int main()
{
	potok.open("my_file.txt");

	while (! potok.eof() )
	{

		potok >> x;
		cout << k;
		cout << ". ";
		cout << x;
		cout << "\n";
		k = k + 1;
	}
}
