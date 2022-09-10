#include <iostream>
using namespace std;
class Two;
class One
{
    int a;

public:
    void read()
    {
        cout << "Enter the number: " << endl;
        cin >> a;
    }
    friend void max(One, Two);
};
class Two
{
    int b;

public:
    void read()
    {
        cout << "Enter the number: " << endl;
        cin >> b;
    }
    friend void max(One, Two);
};
void max(One X, Two Y)
{
    if (X.a > Y.b)
        cout << "Class 1 value is max " << endl;
    else
        cout << "Class 2 value is max " << endl;
};
int main()
{
    One a1;
    Two b1;
    a1.read();
    b1.read();
    max(a1, b1);
    return 0;
}