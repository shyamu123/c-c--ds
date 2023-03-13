#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=5;
    do
    {
        b=1;
        do
        {
            cout<<"*";
            b++;
        }
        while(b<=a);
        cout<<"\n";
        a--;
    }
    while(a>=1);
}