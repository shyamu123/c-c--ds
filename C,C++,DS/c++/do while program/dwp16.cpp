#include<iostream>
using namespace std;
int main()
{
    int a,b,c=65;
    a=1;
    do
    {
        if(a%2==1)
        {
            b=1;
            do
            {
                cout<<" "<<char(c++);
                b++;
            }
            while(b<=a);
        }
        else
        {
            b=1;
            do
            {
                cout<<" "<<char(c+++32);
                b++;
            }
            while(b<=a);
        }
        cout<<"\n";
        a++;
    }
     while(a<=5);
}