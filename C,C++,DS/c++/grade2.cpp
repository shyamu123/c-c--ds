#include<iostream>
using namespace std;
class student
{
    int m1,m2,m3,total,per;
    public:
    void print()
    {
        cout<<"Enter the m1 :";
        cin>>m1;
        cout<<"Enter the m2 :";
        cin>>m2;
        cout<<"Enter the m3 :";
        cin>>m3;
    }
    void total1()
    {
        total=m1+m2+m3;
        per=total/3;
    }
    
    void print1()
    {
        cout<<"\nm1   :"<<m1;
        cout<<"\nm2   :"<<m2;
        cout<<"\nm3   :"<<m3;
        cout<<"\ntotal:"<<total;
        cout<<"\nper  :"<<per;
    }
    void grade()
    {
        
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
            cout<<("\n  fail");
        }   
    }
};
int main()
{
    student shyamu;
    shyamu.print();
    shyamu.total1();
    shyamu.print1();
    shyamu.grade();
}