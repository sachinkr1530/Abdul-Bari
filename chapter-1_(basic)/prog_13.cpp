//  Write a program to calculate Net Salary Program should take following as input
//  (1) Basic salary
//  (2) Percentage of Allowances
//  (3) Percentage of Deductions

    // Netsalary=basic salary+ basic salary *per of allowances-basic salary *per of ded


#include<iostream>
using namespace std;
int main()
{
    float basic, perOfAllow,perOfDeduct,Netsalary;
    cout<<"Enter Basic salary ";
    cin>>basic;
    cout<<"enter percentage of allowances ";
    cin>>perOfAllow;
    cout<<"Enter percentage of Deductions ";
    cin>>perOfDeduct;
    Netsalary=basic+basic*perOfAllow/100-basic*perOfDeduct/100;
    cout<<"Net salary "<<Netsalary<<endl;
    return 0;
    

}