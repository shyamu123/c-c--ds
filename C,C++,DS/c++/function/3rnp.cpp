#include <iostream>
using namespace std;
int main()
{
    int a;
    int shyam();
    a = shyam();

    cout<<"squre :"<<a * a;
    cout<<"\ncube :"<<a * a * a;
}
int shyam()
{
    int a;
    cout<<"Enter the number :";
    cin>>a;

    return a;
}