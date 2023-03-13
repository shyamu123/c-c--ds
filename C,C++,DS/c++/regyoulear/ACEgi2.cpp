#include<iostream>
using namespace std;
int main()
{
    int a;
    for(a=0;a<=20;a++)
    {
        if(a%4==0)
        {
            cout<<" "<<char(a+65);
        }
        else
        {
            cout<<" "<<char(a+32+65);
        }
        a++;
    }
}