#include <iostream>
using namespace std;

// Pseudo-code
// Initialize: n
// input n
// for i=0 to n
//     if isPerfectNumber(&i)
//         print i

// function isPerfectNumber(n: Pointer(Integer))
//     if *n===1
//         return false
//     intiialize: sum = 1
//     for i=2 to sqrt(n)
//         if (*n mod i == 0)
//             sum->sum+1
//             if *n / i != i
//                 sum -> *n/i
//     return sum == *n

// Total Complexity: O(n) * O(sqrt n) = O (n)

bool isPerfectNumber(int *n)
{
    // Find sum of divisor
    if (*n == 1)
        return false;
    int sum = 1;
    for (int i = 2; i * i <= *n; i++)
    {
        if (*n % i == 0)
        {
            sum += i;
            if (*n / i != i)
                sum += *n / i;
        }
    }
    return sum == *n;
}

int main()
{
    int n;
    cout << "Input natural number n: ";
    cin >> n;
    cout << "Perfect number are: ";
    for (int i = 1; i <= n; i++)
        if (isPerfectNumber(&i))
            cout << i << " ";
    return 0;
}