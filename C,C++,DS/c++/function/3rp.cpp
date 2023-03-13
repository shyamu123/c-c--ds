#include <iostream>
using namespace std;
int main()
{
    int a;
    int shyam(int);

    cout<<"Enter the number :";
    cin>>a;

    cout<<"squre :"<<shyam(a * a);
    cout<<"\ncube :"<<shyam(a * a * a);
}
int shyam(int a)
{
    return a;
}