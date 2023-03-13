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
            cout<<" "<<b;
            b++;
        }
        while(b<=a);
        cout<<"\n";
        a++;
    }
    while(a<=69);
}