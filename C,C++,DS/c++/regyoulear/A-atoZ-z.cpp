#include<iostream>
using namespace std;
int main()
{
    char a;
    for(a=65;a<=90;a++)
    {
        cout<<" "<<a<<"-"<<char(a+32)<<" ";
    }
}