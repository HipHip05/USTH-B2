#include <iostream>
#include <math.h>

using namespace std;

struct Point
{
    int x, y;
};

float calculateDistance(Point a, Point b)
{
    return sqrt(pow(b.x - a.x, 2) +
                pow(b.y - a.y, 2));
}

int main()
{
    struct Point points[2];

    for (int i = 0; i < 2; i++)
    {
        int x, y;
        cout << "Input coordinate of point " << i + 1 << " separated by space: ";
        cin >> points[i].x >> points[i].y;
    }
    cout << "Distance between 2 points is: " << calculateDistance(points[0], points[1]);
}