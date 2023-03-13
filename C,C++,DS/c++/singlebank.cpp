#include <iostream>
using namespace std;
class bank
{
    int balance = 0, withdrow, deposit, shyam, o = 0, x = 0;

public:
    static int count, count1;
    bank()
    {
        balance = 100;
    }
    ~bank()
    {
        shyam = balance;
        balance -= balance;
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nyour account for withdrow balance:" << shyam;
        cout << "\nExit for closing balance:" << balance;
        cout << "\nwithdrow of total use:" << bank::count;
        cout << "\ntotal of with:" << o;
        cout << "\ndeposit  of total use:" << bank::count1;
        cout << "\ntotal of depo:" << x;
    }
    void with()
    {
        cout << "\nEnter the withdrow :";
        cin >> withdrow;
        if (withdrow > balance)
        {
            cout << "you have not balance";
        }
        cout << "\nyoyr withdrow :" << withdrow;
        balance -= withdrow;
        count++;
        o += withdrow;
    }
    void depos()
    {
        cout << "\nEnter the deposit :";
        cin >> deposit;
        if (deposit > 0)
        {
            cout << "\nYour deposit :" << deposit;
            balance += deposit;
        }
        count1++;
        x += deposit;
    }
    void showbalance()
    {
        cout << "\nYou have total balance :" << balance;
    }
    void ex()
    {
        cout << "Exit";
    }
};
class person : public bank
{
    char a[20];
public:
    void shyam()
    {
        cout << "Enter the phone number :";
        cin >> a;
    }
};
int bank::count, bank::count1;
int main()
{
    person obj;
    obj.shyam();
    int h, ch;
    while (ch > 0)
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nWellcome";
        cout << "\n\n1.withdrow";
        cout << "\n2.deposit";
        cout << "\n3.AC switch";
        cout << "\n9.showbalance";
        cout << "\n0.Exit";
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nEnter your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:

            obj.with();
            break;
        case 2:
            obj.depos();
            break;
        case 9:
            obj.showbalance();
            break;
        case 0:
            obj.ex();
            break;
        default:
            cout << "wrong choice...";
            break;
        }
    }
}