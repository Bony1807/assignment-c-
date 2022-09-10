#include <iostream>
using namespace std;
void areaC(int r)
{
    cout << "Area of circle is " << 3.14 * r * r << endl;
};
void areaC(int r, int b)
{
    cout << "Area of rectangle is " << r * b << endl;
};
void areaC(float b, float h)
{
    cout << "Area of triangle is " << (b * h) / 2 << endl;
};
int main()
{
    areaC(5);
    areaC(6, 4);
    areaC((float)3.5, 6.5);

    return 0;
}