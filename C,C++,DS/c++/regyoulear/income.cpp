#include<iostream>
using namespace std;
int main()
{
    int a;
    float b,c,d;
    cout<<"Enter the income :";
    cin>>a;

    b=a-2500;
    if(a<=2500)
    {
        cout<<"\n you don't have to pay tax";
    }
    else if(a>2500 && a<=5000)
    {
        c=b*0.1;
        cout<<"your tax for will be :"<<c,a;
    }
    else if(a>5000 && a<=10000)
    {
        d=b-2500;
        c=250+d*0.2;
        cout<<"Your tax for will be :"<<c,a;
    }
    else if(a>10000)
    {
        d=b-7500;
        c=250+1000+d*0.3;
        cout<<"Your tax for will be :"<<c,a;
    }
}  