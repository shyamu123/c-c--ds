#include<iostream>
using namespace std;
int main()
{
    int a,b,c=15;
    a=1;
    do
    {
        b=1;
        do
        {
            cout<<" ";
            b++;
        }
        while(b<=c);
        b=1;
        do
        {
            cout<<"*";
            b++;
        }
        while(b<=a);
        c--;
        cout<<"\n";
        a++;
    }
    while(a<=5);
}