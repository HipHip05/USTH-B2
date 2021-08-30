#include <iostream>
#include <math.h>

using namespace std;

struct Point
{
    int x, y;
};

bool isRetangle(Point a, Point b)
{
    return !(a.x == b.x || a.y == b.y);
}

int calArea(Point a, Point b)
{
    return abs(b.x - a.x) * abs(b.y - a.y);
}

bool checkPoint(Point a, Point b, Point c)
{
    bool isXValid = min(a.x, b.x) <= c.x && max(a.x, b.x) >= c.x;
    bool isYValid = min(a.y, b.y) <= c.y && max(a.y, b.y) >= c.y;
    return isXValid && isYValid;
}

int main()
{
    struct Point points[2];

    while (true)
    {
        for (int i = 0; i < 2; i++)
        {
            int x, y;
            cout << "Input coordinate of point " << i + 1 << " separated by space: ";
            cin >> points[i].x >> points[i].y;
        }
        if (isRetangle(points[0], points[1]))
        {
            cout << "The area of rectangle built by 2 points is: " << calArea(points[0], points[1]) << endl;
            break;
        }
        else
        {
            cout << "2 points cannot construct a rectangle" << endl;
        }
    }
    struct Point point;
    cout << "Input coordinate of point separated by space: ";
    cin >> point.x >> point.y;

    cout << "This point " << (checkPoint(points[0], points[1], point) ? "" : "not ") << "in retangle";
}