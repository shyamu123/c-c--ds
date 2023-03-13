#include<iostream>
using namespace std;
int main()
{
    int a,b=0,c=0,d=0;
    for(a=1;a<=10;a++)
    {
        b=a+b;
        cout<<"\n"<<a;
        if(a%2==0)
        {
             c=a+c;
             cout<<"\n\t"<<a;
        }
        if(a%2==1)
        {
            d=a+d;
            cout<<"\n\t\t"<<a;
        }
    }  
    cout<<"\n\n total of 1-10 :"<<b;
    cout<<"\n total even    :"<<c;
    cout<<"\n total odd     :"<<d;
}