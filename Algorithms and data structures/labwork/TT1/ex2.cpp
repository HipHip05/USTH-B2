#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    double sum = 0;
    cout << "Input the length of array: ";
    cin >> n;
    vector<double> v(n);
    cout << "Type elements of array separated by space: ";
    for (double &x : v)
    {
        cin >> x;
        sum += x;
    }
    cout << "Sum of the array is : " << sum;
    return 0;
}