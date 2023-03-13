#include<iostream>
using namespace std;
int main()
{
    int a,b,d,n;
    cout<<"Enter the number :";
    cin>>n;

    for(a=-n;a<=n;a++)
    {
        d=a;
        if(d<0)
        d=d*-1;
        for(b=0;b<=n;b++)
        {
            if(d<=b)
            {
                cout<<" *";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}