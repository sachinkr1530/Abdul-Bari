#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter any number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }

    }
    cout<<"sum of factor "<<n<<" is= "<<sum<<endl;
    return 0;
}