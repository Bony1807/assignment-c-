#include <iostream>
using namespace std;

class Cricket
{
protected:
    int total_run, total_match;
    int perfomans = 123;

public:
    void setData(int total_run, int total_match)
    {

        this->total_run = total_run;
        this->total_match = total_match;
    }
};
class derived : public Cricket
{
public:
    void displayData()
    {
        cout << "total run " << total_run << endl;
        cout << "total match " << total_match << endl;
        cout << "avg run are " << (float)total_run / (float)total_match << endl;
        cout << "perfomance is " << perfomans << endl;
    }
};

int main()
{
    derived d1;
    d1.setData(200000, 20);
    d1.displayData();

    return 0;
}