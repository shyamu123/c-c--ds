#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c=64;
    a=1;
    while(a<=5)
    {
        c=c+a;
        b=1;
        while(b<=a)
        {
            cout<<" "<<c--;
            b++;
        }
        cout<<"\n";
        a++;
    }
}