﻿#include <iostream>

using namespace std;

int main()
{
	int sum_1 = 0; // Сума дільників першого числа (i)
	int	sum_2 = 0; // Сума дільників другого числа (sum_1)
	bool skip = false; // Потрібна для уникнення повтору пар

	for (int i = 200; i <= 300; i++)
	{
		for (int j = 1; j < i / 2 + 1; j++)
		{
			if (i % j == 0)
			{
				sum_1 += j;
			}
		}
		if (sum_1 >= 200 && sum_1 <= 300)
		{
			for (int k = 1; k < sum_1 / 2 + 1; k++)
			{
				if (sum_1 % k == 0)
				{
					sum_2 += k;
				}
			}
			if (sum_2 == i && sum_1 != sum_2) 
			{
				if (skip)
				{
					skip = false;
				}
				else {
					cout << i << " --- " << sum_1 << endl;
					skip = true;
				}
			}
		}
		sum_1 = sum_2 = 0;
	}
}