#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter any number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if( count==2)
    {
        cout<<"Prime no "<<n<<endl;
    }
    else{
        cout<<"Not a prime no "<<n<<endl;
    }
}