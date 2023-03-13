#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c,d;
    for(c=1;c<=2;c++)
    {
        for(d=0;d<=2;d++)
        {
            cout<<"Enter the number :a["<<c<<"]["<<d<<"]:";
            cin>>a[c][d];
        }
    }
    for(c=0;c<=2;c++)
    {
        for(d=0;d<=2;d++)
        {
            cout<<"Enter the number :b["<<c<<"]["<<d<<"]:";
            cin>>a[c][d];
        }
    }
    for(c=0;c<=2;c++)
    {
        for(d=0;d<=2;d++)
        {
            cout<<" "<<a[c][d];
        }
        for(d=0;d<=2;d++)
        {
            cout<<" "<<b[c][d];
        }
        for(d=0;d<=2;d++)
        {
            cout<<"\na[c][d]+b[c][d]: "<<a[c][d],b[c][d],a[c][d]+b[c][d];
        }
        cout<<"\n";
    }
}