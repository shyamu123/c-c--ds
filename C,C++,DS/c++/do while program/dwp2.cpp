#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=5;
    do
    {
        b=5;
        do
        {
            cout<<" "<<a;
            b--;
        }
        while(b>=1);
        cout<<"\n";
        a--;
    }
    while(a>=1);
    
}