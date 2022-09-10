#include <iostream>
using namespace std;

inline int multiplication(int a)
{
    return a * a;
}
inline int cube(int a)
{
    return a * a * a;
}
int main()
{
    cout << "multiplication is " << multiplication(9) << endl;
    cout << "cube is " << cube(10) << endl;

    return 0;
}