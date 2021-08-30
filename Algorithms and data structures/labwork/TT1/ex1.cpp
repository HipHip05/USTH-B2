#include <iostream>

using namespace std;

void sumByRef(double a, double b, double *s)
{
    *s = a + b;
}

int sumByPointer(double *a, double *b)
{
    double s;
    s = (*a + *b);
    return s;
}

int main()
{
    double a, b, sum_ref;
    cout << "Input 2 number a and b separated by space: ";
    cin >> a >> b;
    sumByRef(a, b, &sum_ref);
    cout << "Result sum by references: " << sum_ref << endl;
    cout << "Result sum by pointer: " << sumByPointer(&a, &b);
    return 0;
}