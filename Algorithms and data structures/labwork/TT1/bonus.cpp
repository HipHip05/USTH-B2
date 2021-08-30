#include <iostream>
#include <vector>
using namespace std;

int calLatestISBNumber(int a)
{

    int temp = 9, sum = 0;
    while (a > 0)
    {
        sum += temp * (a % 10);
        --temp;
        a /= 10;
    };
    return sum % 11;
}

int main()
{
    int a;
    cout << "Input 9 first number of ISBN code without - (dash) or ?: ";
    // 4-08-858734-? -> 408858734 -> Latest number: 0
    // 4-08-872271-? -> 408872271 -> Latest number: X
    cin >> a;
    int latestDigit = calLatestISBNumber(a);
    if (latestDigit < 10)
        cout << "Latest digit is " << latestDigit;
}