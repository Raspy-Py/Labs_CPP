#include <iostream>

using namespace std;

int main()
{
    float X, Y;

    cout << "Enter X: ";
    cin >> X;

    cout << "Entet Y: ";
    cin >> Y;

    if (Y > 1 - X)
    {
        if (X <= 0 || Y <= 0)
        {
            cout << "The point belongs to the shaded area";
        }
        else
        {
            cout << "The point does not belong to the shaded area";
        }
    }
    else
    {
        cout << "The point does not belong to the shaded area";
    }
}