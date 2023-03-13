#include<iostream>
using namespace std;
int mian()
{
    int a,b;
    a=1;
    do
    {
        b=1;
        do
        {
            cout<<" "<<a;
            b++;
        }
        while(b<=a);
        cout<<"\n";
        a++;
    }
    while(a<=5);
}