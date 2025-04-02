/* Write a program which takes an integer from user and that integer is reversed.
 if the reversed integer is equal to the integer entered by user then,that number is a palindrome if not that number is not s palindrome. */ 


 #include<iostream>
 using namespace std;
 int main()
 {
    int n,num,digit,rev=0;
    cout<<"Enter a positive number ";
    cin>>num;
    n=num;
    do{
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;

    }while(num!=0);
    cout<<"The reverse of the number is: "<<rev<<endl;
    if(n==rev)
    {
        cout<<"The number is a palindrome ";
    }
    else{
        cout<<"This number is not palindrome number ";
    }
 }