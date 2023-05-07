#include <iostream>
using namespace std;
int main()
{
    int a[10],sum;
    cout<<"Enter ten values of numbers :: "<<endl;
    for(int i=1;i<11;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
        cout<<"The values inside the Array is :: ";
    for(int i=1;i<11;i++)
    {

      cout<<endl<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<"The sum of values inside the Array are :: "<<endl;
    for(int i=1;i<11;i++)
    {
        sum=sum+a[i];
    }
        cout<<sum;
    return 0;
}
