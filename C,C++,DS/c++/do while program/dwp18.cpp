#include<iostream>
using namespace std;
int main()
{
    int a,b,c=65;
    a=65;
    do
    {
        b=65;
        do
        {
            cout<<" "<<char(c++);
            b++;
        }
        while(b<=a);
        cout<<"\n";
        a++;
    }
    while(a<=69);
}