#include <iostream>
using namespace std;
class Bank
{
    int balance = 0, withdrow, deposit, shyam, o = 0, x = 0;

public:
    static int count, count1;
    Bank(int c)
    {
        balance = c;
    }
    ~Bank()
    {
        shyam = balance;
        balance -= balance;
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nyour account for withdrow balance:" << shyam;
        cout << "\nExit for closing balance:" << balance;
        cout << "\nwithdrow of total use:" << Bank::count;
        cout << "\ntotal of with:" << o;
        cout << "\ndeposit  of total use:" << Bank::count1;
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
    }
    void ex()
    {
        cout << "Exit";
    }
};
int Bank::count, Bank::count1;
int main()
{
    int ch, a, b, h, balance, x;
    cout << "Enter the bank 1 deposit :";
    cin >> a;
    cout << "Enter the bank 2 deposit :";
    cin >> b;
    Bank shyamu(a), shyamu1(b);
    cout << "\n1.bank:1";
    cout << "\n2.bank:2";
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
                shyamu1.with();
            break;
        case 2:
            if (h == 1)
                shyamu.depos();
            else
                shyamu1.depos();
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
                shyamu1.showbalance();
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