#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* c, const int size, const int Low, const int High)
{
    int i;
    for (i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

void Print(int* c, const int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << setw(4) << c[i];
    cout << endl;
}

int Count(int* c, const int size)
{
    int i;
    int k = 0;
    for (i = 0; i < size; i++)
        if (!(c[i] % 2 == 0 || i % 13 == 0))
            k++;
    return k;
}

int Sum(int* c, const int size)
{
    int i;
    int S = 0;
    for (i = 0; i < size; i++)
        if (!(c[i] % 2 == 0 || i % 13 == 0))
            S += c[i];
    return S;
}

void Zero(int* c, const int size)
{
    int i;
    for (i = 0; i < size; i++)
        if (!(c[i] % 2 == 0 || i % 13 == 0))
            c[i] = 0;
}

int main()
{
    const int n = 21;
    int c[n];
    int Low = 15;
    int High = 85;
    srand((unsigned)time(NULL));
    Create(c, n, Low, High);
    cout << "c = ";
    Print(c, n);
    cout << "Count = " << Count(c, n) << endl;
    cout << "Sum   = " << Sum(c, n) << endl;
    Zero(c, n);
    cout << "c = ";
    Print(c, n);
    return 0;
}
