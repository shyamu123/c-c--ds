#include<iostream>
using namespace std;
int main()
{
    int a,n,c=1;
    cout<<"Enter the number :";
    cin>>n;

    for(a=1;a<=n;a++)
    {
        cout<<" "<<c;
        c+=c;
    }
}