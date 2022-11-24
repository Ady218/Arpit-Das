#include <iostream>
using namespace std;
template <typename T>
class Point
{
private:
    T x, y, z;

public:
    Point()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Point(T x1, T y1, T z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }
    void display()
    {
        cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
    }
    Point operator++()
    {
        ++x;
        ++y;
        ++z;
        return Point(x, y, z);
    }
};
int main()
{
    cout << "Integer values:\n";
    Point<int> p(5, 6, 7);
    p.display();
    cout << "After overloading ++ operator:\n";
    p = ++p;
    p.display();
    cout << "Float values:\n";
    Point<float> q(5.6, 6.7, 7.5);
    q.display();
    cout << "After overloading ++ operator:\n";
    q = ++q;
    q.display();
    return 0;