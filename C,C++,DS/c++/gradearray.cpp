#include<iostream>
using namespace std;
class Student
{
    char name[100];
    int rollno,maths,physics,chemistrey,total,per;
    public:
    void print()
    {      
            cout<<"\nEnter the name       :";
            cin>>name;
            cout<<"Enter the rollno     :";
            cin>>rollno;
            cout<<"Enter the maths      :";
            cin>>maths;
            cout<<"Enter the physics    :";
            cin>>physics;
            cout<<"Enter the chemistrey :";
            cin>>chemistrey;
    }
    void total1()
    {
        total=maths+physics+chemistrey;
        per=total/3;
    }
    void print1()
    {
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\nname        :"<<name;
        cout<<"\nrollno      :"<<rollno;
        cout<<"\nmaths       :"<<maths;
        cout<<"\nphysics     :"<<physics;
        cout<<"\nchemistrey  :"<<chemistrey;
        cout<<"\ntotal       :"<<total;
        cout<<"\nper         :"<<per;   
        if(per>=90 && per<=100)
        {
            cout<<("\ngrad :a++");
        }
        else if(per>=70 && per<=80)
        {
            cout<<("\ngrad :b");
        }
        else if(per>=60 && per<=70)
        {
            cout<<("\ngrad :c");
        }
        else if(per>=50 && per<=60)
        {
            cout<<("\ngrad :d");
        }
        else
        {
            cout<<("\n      fail");
        } 
    }
};
int main()
{
    int a;
    Student shyamu[10];
    for(a=0;a<5;a++)
    {
        shyamu[a].print(); 
    }
    for(a=0;a<5;a++)
    {
        shyamu[a].total1();
        shyamu[a].print1(); 
    }
}