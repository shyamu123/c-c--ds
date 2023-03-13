#include<iostream>
using namespace std;
int main()
{
    int a,b,d,n;
    cout<<"Enter the number :";
    cin>>n;

    a=-n;
    do
    {
        d=a;
        if(d<0)
        d=d*-1;
        b=0;
        do
        {
            if(d<=b)
            {
                cout<<" *";
            }
            else
            {
                cout<<" ";
            }
            b++;
        }
        while(b<=n);
        cout<<"\n";
        a++;
    }
    while(a<=n);
}