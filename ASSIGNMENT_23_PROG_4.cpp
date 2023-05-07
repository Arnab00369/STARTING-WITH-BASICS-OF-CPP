#include <iostream>
using namespace std;
int main()
{
    float radius,area;
    cout<<"Enter the radius of the Circle :: "<<endl;
    cin>>radius;
    area = 3.14 * radius * radius;
    cout<<"Area of the Circle of radius "<<radius<<" units is :: "<<area<<" square units ";
    return 0;
}
