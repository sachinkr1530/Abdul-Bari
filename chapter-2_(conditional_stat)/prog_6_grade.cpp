#include<iostream>
using namespace std;
int main()
{
    int mark1,mark2,mark3,total;
    float avg;
    cout<<"Enyer 3subject marks ";
    cin>>mark1>>mark2>>mark3;
    total=mark1+mark2+mark3;
    avg=total/3;
    if(avg>=60)
    {
        cout<<"First "<<"Avg="<<avg<<endl;
    }
    else if(avg>=45&&avg<60){
        cout<<"Second  "<<"Avg="<<avg<<endl;
    }
    else if(avg>=35&&avg<45){
        cout<<"Third "<<"Avg="<<avg<<endl;
    }
    else{
        cout<<"fail  "<<"avg="<<avg<<endl;
    }
    return 0;
}