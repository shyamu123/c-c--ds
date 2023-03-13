#include<iostream>
using namespace std;
int main()
{
    char a,b;
    a=65;
    while(a<=69)
    {
        b=65;
        while(b<=a)
        {
            cout<<" "<<a;
            b++;
        }
        cout<<"\n";
        a++;
    }
}