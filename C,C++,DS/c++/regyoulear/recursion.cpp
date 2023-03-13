#include<iostream>
using namespace std;
int myfun()
{
    cout<<"\n inside myfun before";
    myfun();
    cout<<"\n inside myfun aftee";
}
int main()
{
    cout<<"\n inside main before...";
    myfun();
    cout<<"\n inside main after...";
}