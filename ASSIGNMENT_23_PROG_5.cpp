#include <iostream>
using namespace std;
int main()
{
    float l,b,h,vol;
    cout<<"Enter the Length, Breadth and Height of the Cuboid ::"<<endl<<"L = ";
    cin>>l;
    cout<<"B = ";
    cin>>b;
    cout<<"H = ";
    cin>>h;
    vol=l*b*h;
    cout<<"The Volume of the Cuboid is :: "<<vol<<" square units ";
    return 0;
}
