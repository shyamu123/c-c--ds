#include<iostream>
using namespace std;
int main()
{
    int a,b,c=1;
    a=1;
    do
    {
        b=1;
        do
        {
            cout<<" "<<c++;
            b++;
        }
        while(b<=a);
        cout<<"\n";
        a++;
    }
    while(a<=5);
}