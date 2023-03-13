#include <iostream>
using namespace std;
class Test
{
    int testcode, nocandidate, centerreqd;
    char description[128];

public:
    int CALCNTR()
    {
        return 0;
    }
    void SCHEDULE()
    {
        cout << "Enter the testcode :";
        cin >> testcode;
        cout << "Enter the description :";
        cin >> description;
        cout << "Enter the nocandidate :";
        cin >> nocandidate;
    }
};
int main()
{
    Test shyamu;
    shyamu.CALCNTR();
    shyamu.SCHEDULE();
}