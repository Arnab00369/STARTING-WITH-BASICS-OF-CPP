#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter two numbers :: "<<endl;
    cout<<"x = ";
    cin>>a;
    cout<<"y = ";
    cin>>b;
    b=a+b;
    a=b-a;
    b=b-a;
    cout<<"The swapped values are :: x = "<<a<<" and y = "<<b;
    return 0;
}
