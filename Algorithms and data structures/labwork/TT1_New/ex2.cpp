#include <iostream>
#include <vector>
using namespace std;

// Pseudo:
// Main: O(n)
// Initialize: arr[], max=arr[0]
// For i = 0 to length of arr
//     findMax(&max, arr[i])
// print max

// findMax(max: Pointer(int), a:Integer)
// Initialize: maxValue is value of max with pointer
// if a> maxValue then
//     *max = a

// Total Complexity: O(n) * O(1) = O(n)

void findMax(int *max, int a)
{
    int maxValue = *max;
    if (a > maxValue)
    {
        *max = a;
    }
}

int main()
{
    int arr[] = {1, 4, 2, 5, 9, 10, 2, 15};
    int max = arr[0];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        findMax(&max, arr[i]);
    cout << "Max is: " << max;
}