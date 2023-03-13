#include<iostream>
using namespace std;
int main()
{
    int a,b,c=11;
    a=1;
    do
    {
        b=1;
        do
        {
            cout<<" "<<c++;
            b++;
        }
        while(b<=5);
        c=c+5;
        cout<<"\n";
        a++;
    }
    while(a<=5);        
}