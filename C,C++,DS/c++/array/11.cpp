#include<iostream>
using namespace std;
int main()
{
    int a[10][10],c,d;
    for(c=0;c<3;c++)
    {
        for(d=0;d<3;d++)
        {
            cout<<"Enter the number a["<<c<<"]["<<d<<"]:";
            cin>>a[c][d];
        }
    }
    for(c=0;c<3;c++)
    {
        for(d=0;d<3;d++)
        {
            cout<<" "<<a[d][c];
        }
        cout<<"\n";
    }
}
