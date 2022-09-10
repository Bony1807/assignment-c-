#include <iostream>
using namespace std;
class Bank
{
    int balance;
    string accountnum;
    string name;
    string accounttype;
    int newbalance;
    int newbalance1;

public:
    void value(string name, string accountnum, string accounttype, int balance)
    {
        this->name = name;
        this->accountnum = accountnum;
        this->accounttype = accounttype;
        this->balance = balance;
        cout << name << " " << endl;
        cout << accountnum << " " << endl;
        cout << accounttype << " " << endl;
        cout << balance << endl;
    }
    void depositer(int depositer)
    {
        cout << "Ater diposite balance is " << balance << " Rs and Add diposite amount is " << depositer << " Rs .and now new balance is " << balance + depositer << endl;
        newbalance = balance + depositer;
    }
    void withdraw(int withdraw)
    {
        cout << " New balance is " << newbalance << " Rs and withdrw amount is " << withdraw << " Rs.now nwm balance is " << newbalance - withdraw << endl;
        newbalance1 = newbalance - withdraw;
    }
    void display()
    {
        cout << "The name of customer is " << name << " and his account balance is " << newbalance1 << endl;
    }
};
int main()
{
    Bank b;
    b.value(" account name = Bony", " account number = 987654321", "Current account", 500000);
    b.depositer(200000);
    b.withdraw(3000);
    b.display();
    return 0;
}