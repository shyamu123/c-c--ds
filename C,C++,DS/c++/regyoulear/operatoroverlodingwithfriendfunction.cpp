#include <iostream>
using namespace std;
class loc
{
    int longitude, latitude;

public:
    loc() {}
    loc(int ig, int it)
    {
        longitude = ig;
        latitude = it;
    }
    void show()
    {
        cout << "\nlongitude:" << longitude << "\tlatitude:" << latitude;
    }
    friend loc operator-(loc, loc);
};
loc operator-(loc obj1, loc obj2)
{
    loc temp;
    temp.longitude = obj1.longitude - obj2.longitude;
    temp.latitude = obj1.latitude - obj2.latitude;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    return temp;
}
int main()
{
    loc obj1(50, 50), obj2(20, 30), obj3;
    obj1.show();
    obj2.show();
    obj3 = obj1 - obj2;
    obj3.show();
}