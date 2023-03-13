#include <iostream>
using namespace std;
class Fuel
{
    int flightnumber;
    char destination[100];
    float distance, fuel;

public:
    void feedinf()
    {
        cout << "Enter the flightnumber :";
        cin >> flightnumber;
        cout << "Enter the destination :";
        cin >> destination;
        cout << "Enter the distance :";
        cin >> distance;
    }
    void showinfo()
    {
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\nflightnumber :" << flightnumber;
        cout << "\ndestination :" << destination;
        cout << "\ndistance :" << distance;
    }
    void calfuel()
    {
        if (distance <= 1000)
        {
            fuel = 500;
        }
        else if (distance > 1000 && distance <= 2000)
        {
            fuel = 1100;
        }
        else
        {
            fuel = 2200;
        }
        cout << "\nfuel :" << fuel;
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    }
};
int main()
{
    Fuel shyamu;
    shyamu.feedinf();
    shyamu.showinfo();
    shyamu.calfuel();
}