#include<iostream>
using namespace std;
int main()
{
    int shubham(int [128],int,int,int);
    int a[128],b,c,n;
    cout<<"enter the decimal number:";
    cin>>n;
    shubham(a,b,c,n);
}
int shubham(int w[128],int x,int y,int z)
{
    for(x=0;z>0;x++)
    {
        w[x]=z%2;
        z=z/2;
    }
    for(y=x-1;y>=0;y--)
    {
        cout<<""<<w[y];
    }
}