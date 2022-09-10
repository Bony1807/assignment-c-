#include <iostream>
using namespace std;
class a
{
protected:
    int id;
    string name;

public:
    void setData(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
};
class b : public a
{
protected:
    float m1;
    float m2;
    float m;

public:
    void setdata1(float m1, float m2)
    {
        this->m1 = m1;
        this->m2 = m2;
        m = m1 + m2;
    }
};
class c : public b
{
public:
    void getdata()
    {
        cout << id << " name: " << name << " mark: " << m1 << " " << m2 << " total marks: " << m << " percentage: " << m / 2 << endl;
    }
};
int main()
{
    c c1;
    c1.setData(1, "Bony");
    c1.setdata1(65, 85);
    c1.getdata();

    return 0;
}