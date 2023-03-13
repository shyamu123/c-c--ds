#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=2;
    do
    {
        b=1;
        if(a%2==0)
        do
        {
            cout<<" "<<a;
            b++;
        }
        while(b<=5);
        cout<<"\n";
        a++;
    }
    while(a<=10);
}