#include <iostream>

using namespace std;

float min(float a, float b);

int main()
{
    float PI = 3.141592;
    float a, b; // Enter data
    float U, V, W; // Res

    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;

    U = min(a, b);
    V = min(a * b, a + b);
    W = min(U + pow(V, 2), PI);

    cout << "U = " << U << "\nV = " << V << "\nW = " << W << endl;
}

float min(float a, float b)
{
    return a <= b ? a : b;
}
