#include<iostream>
using namespace std;
int main()
{
    int a,b,d,n;
    cout<<"Enter the number :";
    cin>>n;

    a=-n;
    while(a<=n)
    {
        d=a;
        if(d<0)
        d=d*-1;
        b=0;
        while(b<=n)
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
        cout<<"\n";
        a++;
    }
}