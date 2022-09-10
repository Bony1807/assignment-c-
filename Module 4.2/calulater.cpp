#include <iostream>
using namespace std;

class cal
{
    int a, b;

public:
    void setData(int x, int y);
    void Addition();
    void Subtraction();
    void multiplication();
    void divisan();
    void module();
};
void cal ::setData(int x, int y)
{
    a = x;
    b = y;
}
void cal ::Addition()
{
    cout << "Addition is " << a + b << endl;
}
void cal ::Subtraction()
{
    cout << "Subtraction is " << a - b << endl;
}
void cal ::multiplication()
{
    cout << "Multiplication is " << a * b << endl;
}
void cal ::divisan()
{
    cout << "Divisan is " << a / b << endl;
}
void cal ::module()
{
    cout << "Module is " << a % b << endl;
}

int main()
{
    cal c1, c2, c3, c4, c5;
    c1.setData(6, 7);
    c1.Addition();
    c2.setData(4, 5);
    c2.Subtraction();
    c3.setData(6, 8);
    c3.multiplication();
    c4.setData(10, 12);
    c4.divisan();
    c5.setData(5, 9);
    c5.module();
    return 0;
}