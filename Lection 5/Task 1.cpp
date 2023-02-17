#include <iostream>

using namespace std;

float num1 = 0;
float num2 = 0;
float result = 0;

float SquaredSum(float a, float b)
{
	float res = ((a + b) * (a + b));
	return res;
}

int main()
{
	cout << "Input 1st num: ";
	cin >> num1;
	cout << "Input 2nd num: ";
	cin >> num2;
	result = SquaredSum(num1, num2);
	cout << "Result: ";
	cout << result;
}
