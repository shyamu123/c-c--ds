#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],i;
    for(i=1;i<=5;i++)
    {
        cout<<"Enter the number a["<<i<<"]:";
        cin>>a[i];
    }
    for(i=1;i<=5;i++)
    {
        cout<<"Enter the number b["<<i<<"]:";
        cin>>b[i];
    }
    for(i=1;i<=5;i++)
    {
        cout<<"\na["<<i<<"] + b["<<i<<"] :"<<a[i]+b[i];
    }
}