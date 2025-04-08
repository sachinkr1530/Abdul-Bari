#include<iostream>
using namespace std;
int main()
{
    int a[7]={2,5,7,54,75,76,78};
    int l=0,h=6,key,mid;
    cout<<"Enter search key ";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            cout<<"Found at "<<mid;
            return 0;

        }
        else if(key<a[mid])
        {
                 h=mid-1;
        }
        else{
            l=mid+1;
        }

    }
    cout<<"not found ";

}