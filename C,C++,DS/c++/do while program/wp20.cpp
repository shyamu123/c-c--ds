#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    a=1;
    while(a<=5)
    {
        b=1;
        while(b<=a)
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
            b++;
        }
        cout<<"\n";
        a++;
    }
}