#include<iostream>
using namespace std;
int main()
{
    int a[10][10],c,d,e=0,f=0,g=0;

    for(c=0;c<3;c++)
    {
        for(d=0;d<3;d++)
        {
            cout<<"Enter the number a["<<c<<"]["<<d<<"]";
            cin>>a[c][d];
        }
    }
    for(c=0;c<3;c++)
    {
        for(d=0;d<3;d++)
        {
            cout<<""<<a[c][d];
        }
        cout<<"\n";
    }
    for(c=0;c<3;c++)
    {
        for(d=0;d<3;d++)
        {
            if(c==d)
            e=e+a[c][d];
        }
    }
    for(c=0;c<3;c++)
    {
        for(d=0;d<3;d++)
        {
            if(c<d)
            {
                f=f+a[c][d];
            }
        }
    }
    for(c=0;c<3;c++)
    {
        for(d=0;d<3;d++)
        {
            if(c>d)
            g=g+a[c][d];
        }
    }
    cout<<"\n diagonal total :"<<e;
    cout<<"\n uper total :"<<f;
    cout<<"\n lower total :"<<g;
    
}