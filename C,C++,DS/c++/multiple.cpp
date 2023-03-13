#include<iostream>
using namespace std;
class a
{
    public:
    a()
    {
        cout<<"\nshyam...";
    }
    ~a()
    {
        cout<<"\ndes shyam...";
    }
};
class b
{
    public:
    b()
    {
        cout<<"\nrabadiya...";
    }  
    ~b()
    {
        cout<<"\ndes rabadiya...";
    }       
};
class c
{
    public:
    c()
    {
        cout<<"\n1...";
    }
    ~c()
    {
        cout<<"\ndes 1...";
    }
};
class d : public a,public b,public c
{
    public:
    d()
    {
        cout<<"\nx...";
    }
};
int main()
{
    d shyamu;
}
