#include <iostream>

using namespace std;

int main()
{
	unsigned a, b;
	unsigned sum = 0;

	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;

	if (a % 2 == 0)
	{

		a++;
	}
	for (int i = a; i <= b; i += 2)
	{
		sum += i * i;
	}
	cout << sum;
}