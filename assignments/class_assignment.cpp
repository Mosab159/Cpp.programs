#include <iostream>
#include <string>
using namespace std;

class rectangle
{
public:
    float length, width;

    void area()
    {
        cout << (width * length) << endl;
    }
    void perimeter()
    {
        cout << (2 * (width + length)) << endl;
    }
};

class bankAccount
{
private:
    double balance;

public:
    string Account_holder;

    void set_balance(double actuall_balance)
    {
        if (actuall_balance < 0)
            balance = 0;
        else
            balance = actuall_balance;
    }

    double get_balance()
    {
        return balance;
    }

    // void print_info(double actuall_balance)
    // {
    //     cout << "the owner is :" << Account_holder << endl;
    //     set_balance(actuall_balance);
    //     cout << "the current balance = " << get_balance() << endl;
    // }
};

int main()
{
    cout << "\n\n***rectangle class***\n\n";
    rectangle rec1;
    rec1.length = 8;
    rec1.width = 6;

    rec1.area();
    rec1.perimeter();

    cout << "\n\n======Bank account======\n\n";

    bankAccount custmer1;
    custmer1.Account_holder = "mosab";
    cout << "the owner is : " << custmer1.Account_holder << endl;
    custmer1.set_balance(15000);
    cout << "the current balance = " << custmer1.get_balance() << "\n\n\n";

    return 0;
}