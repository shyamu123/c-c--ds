#include<iostream>
using namespace std;
int shubham()
{
    int a[128],i,j,n;
    cout<<"enter the decimal number:";
    cin>>n;
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    for(j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }
}
int main()
{
    shubham();
}