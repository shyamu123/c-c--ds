#include <iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout << "shyam...";
    }
    ~a()
    {
        cout << "\nshyam de...";
    }   
};
class b : public a
{
public:
    b()
    {
        cout << "\nrabadiya...";
    }
    ~b()
    {
        cout << "\nrabadiya de...";
    }
};
class c : public b
{
public:
    c()
    {
        cout << "\n1...";
    }
    ~c()
    {
        cout << "\n1 de...";
    }
};
int main()
{
    c shyamu;
}