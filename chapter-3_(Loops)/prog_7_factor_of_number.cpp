#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter any number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"factor of "<<n<<" is= "<<i<<endl;
        }
    }
    return 0;
}