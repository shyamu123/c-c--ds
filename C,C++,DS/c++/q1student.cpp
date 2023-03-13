#include<iostream>
using namespace std;
class Student
{
    int admno;
    char name[20];
    float english,maths,science,total;
public:
    void takedata()
    {
        cout<<"Enter the admno :";
        cin>>admno;
        cout<<"Enter the name :";
        cin>>name;
        cout<<"Enter the marks of english :";
        cin>>english;
         cout<<"Enter the marks of maths :";
        cin>>maths;
         cout<<"Enter the marks of science :";
        cin>>science;
    }
    int ctotal()
    {
        total=english+maths+science;
        return total;
    }
    void showdata()
    {
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\nadmno :"<<admno;
        cout<<"\nname :"<<name;
        cout<<"\nsub of english marks :"<<english;
        cout<<"\nsub of maths marks :"<<maths;
        cout<<"\nsub of science marks :"<<science;
        cout<<"\ntotal sub marks :"<<total;
    }
};
int main()
{
    Student shyamu;
    shyamu.takedata();
    shyamu.ctotal();
    shyamu.showdata();
}