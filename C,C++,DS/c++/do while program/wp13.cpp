#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=5;
    while(a>=1)
    {
        b=5;
        while(b>=a)
        {
            cout<<" "<<a;
            b--;
        }
        cout<<"\n";
        a--;
    }
}