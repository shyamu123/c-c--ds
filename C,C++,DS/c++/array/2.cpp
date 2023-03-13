#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],c;
    for(c=0;c<5;c++)
    {
        cout<<"Enter the number a["<<c<<"]:";
        cin>>a[c];
    }
    for(c=0;c<5;c++)
    {
        cout<<"Enter the number b["<<c<<"]:";
        cin>>b[c];
    }
    for(c=0;c<5;c++)
    {
        cout<<"\na["<<c<<"]:"<<a[c];
    }
    for(c=0;c<5;c++)
    {
        cout<<"\nb["<<c<<"]:"<<b[c];
    } 
}