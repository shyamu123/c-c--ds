#include<iostream>
using namespace std;
int main()
{
    int a,b,c=11;
    a=1;
    while(a<=5)
    {
        b=1;
        while(b<=5)
        {
            cout<<" "<<c++;
            b++;
        }
        c=c+5;
        cout<<"\n";
        a++;
    }
}