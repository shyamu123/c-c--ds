#include <iostream>
using namespace std;
class saving
{
    int balance = 0, withdrow, deposit, shyam, o = 0, x = 0;

public:
    static int count, count1;
    saving()
    {
        balance = 100;
    }
    ~saving()
    {
        shyam = balance;
        balance -= balance;
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nyour account for withdrow balance:" << shyam;
        cout << "\nExit for closing balance:" << balance;
        cout << "\nwithdrow of total use:" << saving::count;
        cout << "\ntotal of with:" << o;
        cout << "\ndeposit  of total use:" << saving::count1;
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
class current
{
    int balance1 = 0, withdrow1, deposit1, shyam, o1 = 0, x1 = 0;

public:
    static int count, count1;
    current()
    {
        balance1 = 1000;
    }
    ~current()
    {
        shyam = balance1;
        balance1 -= balance1;
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nyour account for withdrow balance:" << shyam;
        cout << "\nExit for closing balance:" << balance1;
        cout << "\nwithdrow of total use:" << current::count;
        cout << "\ntotal of with:" << o1;
        cout << "\ndeposit  of total use:" << current::count1;
        cout << "\ntotal of depo:" << x1;
    }
    void with1()
    {
        cout << "\nEnter the withdrow :";
        cin >> withdrow1;
        if (withdrow1 > balance1)
        {
            cout << "you have not balance";
        }
        cout << "\nyoyr withdrow :" << withdrow1;
        balance1 -= withdrow1;
        count++;
        o1 += withdrow1;
    }
    void depos1()
    {
        cout << "\nEnter the deposit :";
        cin >> deposit1;
        if (deposit1 > 0)
        {
            cout << "\nYour deposit :" << deposit1;
            balance1 += deposit1;
        }
        count1++;
        x1 += deposit1;
    }
    void showbalance1()
    {
        cout << "\nYou have total balance :" << balance1;
    }
    void ex1()
    {
        cout << "Exit";
    }
};
class person : public saving, public current
{
    int u;
    char z[20];

public:
    void sh()
    {
        cout << "Enter the name :";
        cin >> z;
        cout << "Enter the phone number :";
        cin >> u;
    }
};
int saving::count, saving::count1;
int current::count, current::count1;
int main()
{
    person shyamu;
    shyamu.sh();
    int ch,h;
    cout << "\n1.saving:1";
    cout << "\n2.current:2";
    cout << "\nEnter the user value for bank :";
    cin >> h;
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
            if (h == 1)
                shyamu.with();
            else
                shyamu.with1();
            break;
        case 2:
            if (h == 1)
                shyamu.depos();
            else
                shyamu.depos1();
            break;
        case 3:
            if (h == 1)
                h = 2;
            else
                h = 1;
            break;
        case 9:
            if (h == 1)
                shyamu.showbalance();
            else
                shyamu.showbalance1();
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