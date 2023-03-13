#include<iostream>
using namespace std;
int main()
{
    int a[10],i;
    for(i=0;i<5;i++)
    {
        cout<<"Enter a["<<i<<"]:";
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"\n a["<<i<<"]"<<a[i];
    }
}