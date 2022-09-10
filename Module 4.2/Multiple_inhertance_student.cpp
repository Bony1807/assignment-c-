#include <iostream>
using namespace std;
class student1
{
protected:
    string name;
    int id;

public:
    void setData1(string name, int id)
    {
        this->id = id;
        this->name = name;
    }
};
class student2
{
protected:
    float m1, m2, percentage;

public:
    void setData2(float m1, float m2)
    {
        this->m1 = m1;
        this->m2 = m2;
    }
};
class derived : public student1, public student2
{
public:
    void teacher()
    {
        cout << "Student envorlment num is " << id << " And her name is " << name << endl;
        cout << "science mark is " << m1 << "and social science mark is " << m2 << "and percentage is " << (m1 + m2) / 2 << endl;
    }
};
int main()
{
    derived d1;
    d1.setData1("Bony", 1);
    d1.setData2(60, 80);
    d1.teacher();

    return 0;
}