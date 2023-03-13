#include<iostream>
using namespace std;
struct student
{
    int rollno;
    char name[10];
    int m1,m2,m3,total;
    float per;
};
int main()
{
    int i;
    struct student st[5];
    cout<<"Enter records of 2 students ";
    for(i=0;i<2;i++)
    {
        cout<<"\nEnter rollno :";
        cin>>st[i].rollno;
        cout<<"Enter name :";
        cin>>st[i].name;
        cout<<"Enter m1 :";
        cin>>st[i].m1;
        cout<<"Enter m2 :";
        cin>>st[i].m2;
        cout<<"Enter m3 :";
        cin>>st[i].m3;     
    }
    cout<<"\n student information list ";
    for(i=0;i<2;i++)
    {
        st[i].total=st[i].m1+st[i].m2+st[i].m3;
        st[i].per=st[i].total/3;
        cout<<"\n rollno :"<<st[i].rollno<<"\n name :"<<st[i].name;
        cout<<"\n total :"<<st[i].total<<"\n percentage :"<<st[i].per;
    }
}