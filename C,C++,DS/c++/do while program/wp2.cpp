#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=5;
    while(a>=1)
    {
        b=1;
        while(b<=5)
        {
            cout<<" "<<a;
            b++;
        }
        cout<<"\n";
        a--;
    }
}