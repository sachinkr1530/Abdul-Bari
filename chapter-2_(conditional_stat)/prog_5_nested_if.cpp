#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter any number ";
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<"a is greater "<<a;
    }
    else if(b>a&&b>c){
        cout<<"b is greater "<<b;
    }
    else if(c>a&&c>b){
        cout<<"c is greater "<<c;
    }
    return 0;

}