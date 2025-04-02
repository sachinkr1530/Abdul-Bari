#include<iostream>
using namespace std;
int main()
    {
        int n,i,fact=1;
        cout<<"Enter any number ";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"Factorial of n number is "<<fact<<endl;
        cout<<n<<"!= "<<fact<<endl;
        return 0;
    }
