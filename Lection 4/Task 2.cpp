#include <iostream>
#include <string>
#include <cstring>
using namespace std;
char input[100];
char output[100];
int l = 0;
int n = 0;
int i = 0;
int main()
{
	cout << "Input string: ";
	cin >> input;
	l=strlen(input);
	for (i = 0; i < l; i++)
	{
		output[i] = char(int(input[i])-1);
		
	}
	
	cout << output;

}
