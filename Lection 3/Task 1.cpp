#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int a = 0;
int b = 0;
int i = 0;
int k = 1;
string x = "0";


ofstream potok;


int main()
{
	potok.open("my_file.txt");
	std::cout << ("Input A:\n");
	std::cin >> (a);
	std::cout << ("Input B:\n");
	std::cin >> (b);
	for (i = a;i <= b;i++)
	{

		potok << (i * 3) << "\t";
	}
	potok.close();

}
