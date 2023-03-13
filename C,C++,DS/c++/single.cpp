#include<iostream>
using namespace std;
class a
{
    public:
    a()
    {
        cout<<"hello...";
    }
    ~a()
    {
        cout<<"\ndest hello...";
    }
};
class b : public a
{
    public:
    b()
    {
        cout<<"\n2....";
    }
    ~b()
    {
        cout<<"\ndest 2...";
    }
};
int main()
{
    b shyamu;
}