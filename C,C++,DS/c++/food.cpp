#include <iostream>
using namespace std;
class Food
{
    float qty, total, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;

public:
    static int count;
    void mamara()
    {
        cout << "\n\t\t\t\t\t\tQty for the mamara:";
        cin >> qty;
        a = qty * 120.00;
        cout << "\t\t\t\t\t\ttotal:" << a;
        total = total + a;
        count++;
    }
    void Sandwich()
    {
        cout << "\n\t\t\t\t\t\tQty for the Sandwich:";
        cin >> qty;
        b = qty * 150.00;
        cout << "\t\t\t\t\t\ttotal:" << b;
        total = total + b;
        count++;
    }
    void panipuri()
    {
        cout << "\n\t\t\t\t\t\tQty for the panipuri:";
        cin >> qty;
        c = qty * 80.00;
        cout << "\t\t\t\t\t\ttotal:" << c;
        total = total + c;
        count++;
    }
    void pizz()
    {
        cout << "\n\t\t\t\t\t\tQty for the pizz:";
        cin >> qty;
        d = qty * 360.00;
        cout << "\t\t\t\t\t\ttotal:" << d;
        total = total + d;
        count++;
    }
    void burgore()
    {
        cout << "\n\t\t\t\t\t\tQty for the burgore:";
        cin >> qty;
        e = qty * 230.00;
        cout << "\t\t\t\t\t\ttotal:" << e;
        total = total + e;
        count++;
    }
    void masalapaav()
    {
        cout << "\n\t\t\t\t\t\tQty for the masalapaav:";
        cin >> qty;
        f = qty * 40.00;
        cout << "\t\t\t\t\t\ttotal:" << f;
        total = total + f;
        count++;
    }
    void dhosa()
    {
        cout << "\n\t\t\t\t\t\tQty for the dhosa:";
        cin >> qty;
        g = qty * 190.00;
        cout << "\t\t\t\t\t\ttotal:" << g;
        total = total + g;
        count++;
    }
    void soda()
    {
        cout << "\n\t\t\t\t\t\tQty for the soda:";
        cin >> qty;
        h = qty * 50.00;
        cout << "\t\t\t\t\t\ttotal:" << h;
        total = total + h;
        count++;
    }
    void rabadi()
    {
        cout << "\n\t\t\t\t\t\tQty for the rabadi:";
        cin >> qty;
        i = qty * 450.00;
        cout << "\t\t\t\t\t\ttotal:" << i;
        total = total + i;
        count++;
    }
    void racepuri()
    {
        cout << "\n\t\t\t\t\t\tQty for the racepuri:";
        cin >> qty;
        j = qty * 500.00;
        cout << "\t\t\t\t\t\ttotal:" << j;
        total = total + j;
        count++;
    }
    void totall()
    {
        cout << "\n\t\t\t\t\t\tQty of all total:" << total;
    }
    void exit()
    {
        cout << "\n\t\t\t\t\t\tQty of all total:" << total;
        cout << "\n\t\t\t\t\t\ttotal food odear:" << Food::count;
        cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~Exit~~~~~~~~~~~~~~~~~~~~~~~";
    }
};
int Food::count;
int main()
{

    int ch;
    Food shyamu;
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~SHYAMU~RESTAURANT~~~~~~~~~~~~~~~";
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n\t\t\t\t\t\t~     1.mamara                   $120.00     ~";
    cout << "\n\t\t\t\t\t\t~     2.Sandwich                 $150.00     ~";
    cout << "\n\t\t\t\t\t\t~     3.panipuri                 $80 .00     ~";
    cout << "\n\t\t\t\t\t\t~     4.pizz                     $360.00     ~";
    cout << "\n\t\t\t\t\t\t~     5.burgore                  $230.00     ~";
    cout << "\n\t\t\t\t\t\t~     6.masalapaav               $40 .00     ~";
    cout << "\n\t\t\t\t\t\t~     7.dhosa                    $190.00     ~";
    cout << "\n\t\t\t\t\t\t~     8.soda                     $50 .00     ~";
    cout << "\n\t\t\t\t\t\t~     9.rabadi                   $450.00     ~";
    cout << "\n\t\t\t\t\t\t~     10.racepuri                $500.00     ~";
    cout << "\n\t\t\t\t\t\t~     11.total                               ~";
    cout << "\n\t\t\t\t\t\t~     0.Exit                                 ~";
    cout << "\n\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    while (ch > 0)
    {
        cout << "\n\t\t\t\t\t\tENTER THE CHOISE:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            shyamu.mamara();
            break;
        case 2:
            shyamu.Sandwich();
            break;
        case 3:
            shyamu.panipuri();
            break;
        case 4:
            shyamu.pizz();
            break;
        case 5:
            shyamu.burgore();
            break;
        case 6:
            shyamu.masalapaav();
            break;
        case 7:
            shyamu.dhosa();
            break;
        case 8:
            shyamu.soda();
            break;
        case 9:
            shyamu.rabadi();
            break;
        case 10:
            shyamu.racepuri();
            break;
        case 11:
            shyamu.totall();
            break;
        case 0:
            shyamu.exit();
            break;
            default:
            cout << "wrong choice...";
            break;
        }
    }
}