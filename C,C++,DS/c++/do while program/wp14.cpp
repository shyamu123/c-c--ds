#include<iostream>
using namespace std;
int main()
{
    int a,b,c=1;
    a=1;
    while(a<=5)
    {
        b=1;
        while(b<=a)
        {
            cout<<" "<<c++;
            b++;
        }
        cout<<"\n";
        a++;
    }
}