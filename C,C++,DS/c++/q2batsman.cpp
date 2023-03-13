#include<iostream>
using namespace std;
class Batsman
{
    int bcode,innings,notout,runs;
    char bname[20];
    float batavg;
public:
    void readdata()
    {
        cout<<"Enter the bcode for a 4 digit :";
        cin>>bcode;
        cout<<"Enter the bname :";
        cin>>bname;
        cout<<"Enter the batsman innings :";
        cin>>innings;
        cout<<"Enter the batsman notout :";
        cin>>notout;
        cout<<"Enter the batsman runs :";
        cin>>runs;
    }
    void calcavg()
    {
        batavg=runs/(innings-notout);
    }
    void displaydata()
    {
        cout<<"avg :"<<batavg;
    }
};
int main()
{
    Batsman shyamu;
    shyamu.readdata();
    shyamu.calcavg();
    shyamu.displaydata();
}