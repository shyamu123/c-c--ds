#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=1;
    do
    {
        b=1;
        do
        {
            cout<<" "<<b;
            b++;
        }
        while(b<=a);
        cout<<"\n";
        a++;

    }
    while(a<=5);
}