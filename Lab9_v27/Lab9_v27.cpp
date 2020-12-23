#include <iostream>
#include <cstring>
#include <conio.h>
#include <iomanip>

using namespace std;

void numerizor(char*, int*);
int sumator(int*);

int main()
{
	char symbols[100];
	int codes[100];
	int sum;
	
	cout << "Enter whatever you want: ";
	gets_s(symbols);

	numerizor(symbols, codes);
	sum = sumator(codes);

	cout << "\nSum: " << sum << endl;
}

void numerizor(char*s, int*c)
{
	int counter = 0;
	int n;
	cout << "Numbers: ";
	for (int i = 0; s[i] >= 0; i++)
	{
		n = (int)s[i];
		if (n >= 48 && n <= 57)
		{
			c[counter] = n - 48;
			cout << c[counter] << " ";
			counter++;
		}
	}
	c[counter] = 0;
}

int sumator(int*c)
{
	int sum = 0;
	for (int i = 0; c[i]; i++)
	{
		sum += c[i];
	}
	return sum;
}