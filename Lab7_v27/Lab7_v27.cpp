#include <iostream>

using namespace std;

void genMarks(float*, int l);
void bubbleSort(float*, int l);
float findAvarage(float*, int l);

int main()
{
    const int l = 10;
    float marks[l];
    float avarage;

    genMarks(marks, l);
    bubbleSort(marks, l);

    avarage = findAvarage(marks, l);

    cout << "Total mark: " << avarage;
}

void genMarks(float* p, int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << "Mark #" << i + 1 << ": ";
        cin >> *(p + i);
    }
}

void bubbleSort(float*p, int l)
{
    float temp;
    for (int i = 0; i < l - 1; i++)
    {
        for (int j = 1; j < l - i; j++)
        {
            temp = *(p + j - 1);
            if (temp > *(p + j))
            {
                *(p + j - 1) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

float findAvarage(float*p, int l)
{
    float avr;
    float sum = 0;

    if (*(p + 1) != *p)
    {
        l--;
        p++;
    }
    if (*(p + l) != *(p + l - 1))
    {
        l--;
    }

    for (int i = 0; i < l; i++)
    {
        sum += *(p + i);
    }

    avr = sum / l;

    return avr;
}