#include <iostream>
#include <cmath>

int main()
{
	float c; // Гіпотенуза
	float a; // Перший катет
	float b; // Другий катет
	float r; // Радіус вписаного кола

	std::cout << "Enter hypotenuse: ";
	std::cin >> c;

	std::cout << "Enter first leg: ";
	std::cin >> a;

	if (c <= a || (c <= 0 || a <= 0))
	{
		std::cout << "This triangle doesn't exist" << std::endl;
	}
	else
	{
		b = pow((c * c - a * a), 0.5);
		r = (a + b - c) / 2;
		std::cout << "The radius of the inscribed circle: " << r << std::endl;
	}
}