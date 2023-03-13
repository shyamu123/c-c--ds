#include<iostream>
using namespace std;
int main()
{
    int a,b,c=6;
    a=1;
    while(a<=5)
    {
        c=c-a;
        b=1;
        while(b<=a)
        {
            cout<<" "<<c++;
            b++;
        }
        cout<<"\n";
        a++;
    }
}