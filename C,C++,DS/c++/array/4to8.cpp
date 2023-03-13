#include<iostream>
using namespace std;
int main()
{
    int a[10],i,b=0,c=0,d=0,e=0;
    for(i=1;i<=10;i++)
    {
        cout<<"Enter the number a["<<i<<"]:";
        cin>>a[i];
    }
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        {
            b=b+a[i];
        }
    }
    cout<<"\n odd position element total : "<<b;

    for(i=1;i<=10;i++)
    {
        if(i%2==1)
        {
            c=c+a[i];
        }
    }
    cout<<"\n even position element total :"<<c;

    for(i=1;i<=10;i++)
    {
        if(a[i]%2==1)
        {
            d=d+a[i];
        }
    }
    cout<<"\n odd element total :"<<d;

    for(i=1;i<=10;i++)
    {
        if(a[i]%2==0)
        {
            e=e+a[i];
        }
    }
    cout<<"\n even element total :"<<e;
    cout<<"\n all element total  :"<<b+c;
}