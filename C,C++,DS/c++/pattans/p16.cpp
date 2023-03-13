#include<iostream>
using namespace std;
int main()
{
    char c=65;
    int a,b;
    for(a=1;a<=5;a++)
    {
        if(a%2==1)
        {
            for(b=1;b<=a;b++)
            {
                cout<<" "<<c++;
            }
        }
        else
        {
            for(b=1;b<=a;b++)
            {
                cout<<" "<<char(c+++32);
            }
        }
        cout<<"\n";
    }
}