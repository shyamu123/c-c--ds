#include<iostream>
using namespace std;
class Electricity
{
    char name[100];
    float bill,unit,a,b,c;
    public:
    void enterdata()
    {
        cout<<"name :";
        cin>>name;
        cout<<"use of the unit :";
        cin>>unit;
    }
    void tt()
    {   
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\nname :"<<name;
        cout<<"\nunit :"<<unit;
        if(unit<=100)
        {
            bill=unit*0.6+50;
            cout<<"\n100 unit 60p :"<<bill;
        }
        else if(unit<=300 && unit>=100)
        {
            a=unit-100;
            bill=100*0.6+(a*0.8)+50;
            cout<<"\n200 unit 80p :"<<bill;
        }
        else if(unit>=300)
        {
            a=unit-300;
            bill=100*0.6+(200*0.8)+(a*0.9)+50;
            cout<<"\n300 unit 90p :"<<bill;
        }
        if(unit>=300)
        {
            c=bill*0.15;
            b=bill+c;
            cout<<"\n300 unit up 15p :"<<b;
        }
    }
};
int main()
{
    int x;
    Electricity shyamu[10];
    for(x=0;x<5;x++)
    {
        shyamu[x].enterdata();
    }
    for(x=0;x<5;x++)
    {
        shyamu[x].tt();
    }
}