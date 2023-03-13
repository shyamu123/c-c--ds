#include<iostream>
using namespace std;
int main()
{
    float bill,unit,a,b,c;

    cout<<"Use of the unit :";
    cin>>unit;

    if(unit<=100)
    {
        bill=unit*0.6+50;
        cout<<"\n 100 unit 60p :"<<unit;
    }
    else if(unit<=300 && unit>=100)
    {
        a=unit-100;
        bill=100*0.6+a*0.8+50;
        cout<<"\n 200 unit 80p :"<<unit;
    }
    else if(unit>=300)
    {
        a=unit-300;
        bill=100*0.6+200*0.8+a*0.9+50;
        cout<<"\n 300 unit 90p :"<<unit;
    }
    if(unit>=300)
    {
        c=bill*0.15;
        b=bill+c;
        cout<<"\n 300 unit up 15p :"<<b;
    }
}