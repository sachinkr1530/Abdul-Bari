#include<iostream>
using namespace std;
int main()
{
    int a[7]={4,8,2,7,9,1,4};
    int max;
    max=a[0];
    for(int i=0;i<7;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Maximum no is "<<max;
    return 0;
}