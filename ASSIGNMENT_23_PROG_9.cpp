#include <iostream>
using namespace std;
int main()
{
    float a,b,max;
    cout<<"Enter two numbers ::\n";
    cout<<"1st Number = ";
    cin>>a;
    cout<<"2nd Number = ";
    cin>>b;
    if(a>b)
        max=a;
    else
        max=b;
    cout<<"The maximum of two numbers is :: "<<max;
    return 0;
    }
