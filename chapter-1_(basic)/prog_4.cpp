//  Roots of a Quadratic Equcation

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int  a,b,c;
    float r1,r2;
    cout<<"Enter the number ";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Root are "<<r1<<" "<<r2<<endl;
    return 0;
}

