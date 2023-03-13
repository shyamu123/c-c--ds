#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            c++;
            if(c%2==1)
            {
                c=1;
            }
            else
            {
                c=0;
            }
            cout<<" "<<c;
        }
        cout<<"\n";
    }
}