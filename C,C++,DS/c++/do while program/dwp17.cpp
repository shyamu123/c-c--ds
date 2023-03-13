#include<iostream>
using namespace std;
int main()
{
    int a,b,c=65;
    a=1;
    do
    {
        b=1;
        do
        {
            if(b%2==0)
            {
                cout<<" "<<char(c++);
            }
            else
            {
                cout<<" "<<char(c+++32);
               
            }
            b++;
        }
        while(b<=a);
        cout<<"\n";
        a++;
    }
    while(a<=5);
}