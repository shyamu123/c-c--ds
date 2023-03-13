#include<iostream>
using namespace std;
int main()
{
    char a,b,c=65;
    a=65;
    do
    {
        b=1;
        do
        {
            cout<<" "<<c++;
            b++;
        }
        while(b<=5);
        cout<<"\n";
        a++;
    }
    while(a<=69);
}