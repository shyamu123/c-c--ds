#include<iostream>
using namespace std;
int main()
{
    int a,b,c=1;
    for(a=5;a>=1;a--)
    {
        for(b=1;b<=c;b++)
        {
            cout<<"";
        }
        for(b=1;b<=a;b++)
        {
            cout<<"  *";
        }
        c++;
        cout<<"\n";
    }
}