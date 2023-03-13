#include<iostream>
using namespace std;
class a
{
    public:
    a()
    {
        cout<<"\nshyam";
    }
};
class b : public a
{
    public:
    b()
    {
        cout<<"\nrabadiya";
    }
};
class c : public a
{
    public:
    c()
    {
        cout<<"\n1";
    }
};
class d : public b,public c
{
    public:
    d()
    {
        cout<<"\n2";
    }
};
int main()
{
    d shyam;
}