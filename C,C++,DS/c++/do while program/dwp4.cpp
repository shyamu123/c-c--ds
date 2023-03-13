#include<iostream>
using namespace std;
int main()
{
    char a,b;
    a=65;
    do
    {
        b=65;
        do
        {
            cout<<" "<<a;
            b++;
        }
        while(b<=69);
        cout<<"\n";
        a++;
    }
    while(a<=69);
}