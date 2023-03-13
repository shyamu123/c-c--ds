#include <iostream>
using namespace std;
class bank
{
    int withdrow, deposit, shyam, o = 0, x = 0;

public:
    int balance = 0, lon, shyamuu=0;
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
        cout << "\n your account of the total loon:" << shyamuu;
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
            count1++;
            x += deposit;
        }
    }
    void showbalance()
    {
        cout << "\nYou have total balance :" << balance;
        cout << "\n total lon of price :" << shyamuu;
    }
    void ex()
    {
        cout << "Exit";
    }
};
class loon : public bank
{
public:
    void looon()
    {
        cout << "Enter the loon :";
        cin >> lon;
        if (lon < 10000)
        {
            cout << "loon amount minimum $10000 up";
        }
        else if (lon >= 10000 && lon <= 100000)
        {
            cout << "Enter the loon of price :" << lon;
            shyamuu = lon + balance;
        }
    }
};
class person : public loon
{
public:
    void shyam()
    {
        int q;
        char w[20];
        cout << "Enter the name :";
        cin >> w;
        cout << "Enter the phon number :";
        cin >> q;
    }
};
int bank::count, bank::count1;
int main()
{
    int ch, h;
    person shyamu;
    shyamu.shyam();
    // shyamu.looon();
    while (ch > 0)
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nWellcome";
        cout << "\n\n1.withdrow";
        cout << "\n2.deposit";
        cout << "\n3.AC loon";
        cout << "\n9.showbalance";
        cout << "\n0.Exit";
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nEnter your choise:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            shyamu.with();
            break;
        case 2:
            shyamu.depos();
            break;
        case 3:
            shyamu.looon();
            break;
        case 9:
            shyamu.showbalance();
            break;
        case 0:
            shyamu.ex();
            break;
        default:
            cout << "wrong choice...";
            break;
        }
    }
}