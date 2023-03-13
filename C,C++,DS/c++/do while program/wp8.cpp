#include<iostream>
using namespace std;
int main()
{
    char a,b,c=65;
    a=65;
    while(a<=69)
    {
        b=1;
        while(b<=5)
        {
            cout<<" "<<c++;
            b++;
        }
        cout<<"\n";
        a++;
    }
}