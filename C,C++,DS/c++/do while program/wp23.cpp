#include<iostream>
using namespace std;
int main()
{
    int a,b,c=15;
    a=1;
    while(a<=5)
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
            cout<<" *";
            b++;
        }
        c--;
        cout<<"\n";
        a++;
    }
}