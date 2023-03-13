#include<iostream>
using namespace std;
int main()
{
    int a,b,c=1;
    a=5;
    while(a>=1)
    {
        b=1;
        while(b<=c)
        {
            cout<<" ";
            b++;
        }
        b=1;
        while(b<=a)
        {
            cout<<"*";
            b++;
        }
        c++;
        cout<<"\n";
        a--;
    }
}