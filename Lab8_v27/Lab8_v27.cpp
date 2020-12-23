#include <iostream>
#include <iomanip>

using namespace std;

int** create_array(int); // Виділяємо пам'ять
void init_array(int**, int); // Ініціалізуємо масиви
void swap_min(int**, int); // Міняємо мін. елементи місцями
void gen_of_max(int**, int**, int**, int); // Генеруємо масив з макс. елементів (Q, A, B)
void print_array(int**, int); // Для виведення

int main()
{
    int n; // Розмір матриці;
    int** A;
    int** B;
    int** Q;

    cout << "Enter matrix's size: ";
    cin >> n;

    A = create_array(n);
    B = create_array(n);
    Q = create_array(n);

    init_array(A, n);
    init_array(B, n);
    cout << "A:\n";
    print_array(A, n);
    cout << "B:\n";
    print_array(B, n);

    swap_min(A, n);
    swap_min(B, n);
    cout << "A:  (swapped)\n";
    print_array(A, n);
    cout << "B:  (swapped)\n";
    print_array(B, n);

    gen_of_max(Q, A, B, n);
    cout << "Q:\n";
    print_array(Q, n);
}

int** create_array(int n)
{
    int** p = new int* [n];
    for (int i = 0; i < n; i++)
    {
        p[i] = new int[n];
    }
    return p;
}

void init_array(int** M, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            M[i][j] = rand() % 100;
        }
    }
}

void swap_min(int** M, int n)
{
    int* min1; // min1 <= min2
    int* min2;
    int t; // тимчасова змінна

    // Міняємо місцями елементи в рядках
    for (int i = 0; i < n; i++)
    {
        min2 = &M[i][1];
        min1 = &M[i][0];
        for (int j = 1; j < n; j++)
        {
            if (M[i][j] <= *min2)
            {
                if (M[i][j] < *min1)
                {
                    min2 = min1;
                    min1 = &M[i][j];
                }
                else
                {
                    min2 = &M[i][j];
                }
            }
        }
        t = *min1;
        *min1 = *min2;
        *min2 = t;
    }
    // Міняємо елементи на головній діагоналі
    min2 = &M[1][1];
    min1 = &M[0][0];
    for (int i = 1; i < n; i++)
    {
        if (M[i][i] <= *min2)
        {
            if (M[i][i] < *min1)
            {
                min2 = min1;
                min1 = &M[i][i];
            }
            else
            {
                min2 = &M[i][i];
            }
        }
    }
    t = *min1;
    *min1 = *min2;
    *min2 = t;
}

void gen_of_max(int** Q, int** A, int** B, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Q[i][j] = A[i][j] >= B[i][j] ? A[i][j] : B[i][j];
        }
    }
}

void print_array(int** M, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << M[i][j];
        }
        cout << endl;
    }
}