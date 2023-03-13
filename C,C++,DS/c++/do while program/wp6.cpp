#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=1;
    while(a<=10)
    {
        if(a%2==1)
        b=1;
        while(b<=5)
        {
            cout<<" "<<a;
            b++;
        }
        cout<<"\n";
        a++;
    }
}