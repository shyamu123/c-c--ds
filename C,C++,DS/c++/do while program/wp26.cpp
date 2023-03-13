#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=5;
    while(a>=1)
    {
        b=1;
        while(b<=a)
        {
            cout<<"*  ";
            b++;
        }
        cout<<"\n";
        a--;
    }
}