#include <iostream>

using namespace std;

int main()
{
	double Np, X;
	double Nc = 1;
	double Eps = 0.0001;
	double Sum = 1;
	int N = 1;

	cout << "Enter X: ";
	cin >> X;

	if (X >= 0 && X <= 4)
	{
		do
		{
			Np = Nc;
			Nc = Nc * (-1) * X * X / ((2 *  N - 1) * (2 * N));
			Sum += Nc;
			N++;
		} while (abs(Nc + Np) > Eps);
		cout << "Sum: " << Sum;
	}
	else
	{
		cout << "\nInvalid value of X=" << X;
	}
}