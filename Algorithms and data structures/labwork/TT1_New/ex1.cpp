#include <iostream>
#include <vector>
using namespace std;

// Pseudo-code
// Main: O(n)
// Input: n
// for i=30 to n
//     Initialize: f[]
//     f = factorize(i)
//      if length of f ==3 and isDistinct(f)
//         print i
//     i=i+1

// function factorize(n: Integer) // Complexity:  O(sqrt(N))
//     Initialize: res[]
//     For i=2 to sqrt(n) then
//         while n mod i == 0 then
//             res.Insert(i)
//             n = n/i
//         i+=1
//     if n != 1
//         res.Insert(n)
//     return res

// bool isDistinct(arr: Integer[]) // Complexity: O(n)
//     Initialize: n = length of arr, tmp[n] with all elements is 0
//     For i=0 to n
//         element = arr[i]
//         if tmp[element] > 1
//             return false
//         tmp[element] = tmp[element] + 1

//     }
//     return true;

// Total Complexity O(n) * (O(n) + O(sqrt(n))) = O(n^2)

vector<int> factorize(int n)
{
    vector<int> res;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1)
    {
        res.push_back(n);
    }
    return res;
}

bool isDistinct(vector<int> arr)
{
    int n = arr.size();
    vector<int> tmp(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (tmp[arr[i]] > 1)
        {
            return false;
        }
        ++tmp[arr[i]];
    }
    return true;
}

int main()
{
    int n;
    cout << "Input natural number n: ";
    cin >> n;
    // From 30 because min of sphenic is 30 = 2*3*5 (3 primes minimum)
    for (int i = 30; i <= n; i++)
    {
        vector<int> f = factorize(i);
        if (f.size() == 3 && isDistinct(f))
        {
            cout << i << " ";
        }
    }
}
