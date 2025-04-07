#include<iostream>
using namespace std;
int main()
{
    int a[10],n=10,i,key;
    cout<<"Enter number  ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key to search ";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"Found at "<<i;
            return 0;
        }
    }
    cout<<"Key not found "<<i;
    return 0;
}