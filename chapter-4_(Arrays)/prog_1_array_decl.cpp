//  Array_declar

// #include<iostream>
// using namespace std;
// int main()
//     {
//         int a[5];
//         for(int i=0;i<5;i++)
//         {
//             cout<<a[i]<<endl;
//         }
//         return 0;
//     }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int A[5]={2,4,6};
//     // for(int i=0;i<5;i++)
//     for (int x:A)
//     {
//         cout<<x<<endl;
//         // cout<<A[i]<<endl;
//     }
//     return 0;
// }



// float value 

#include<iostream>
using namespace std;
int main(){
    float a[]={2.5f,5.5f,6,4};
    for(auto x:a) // you can declare and use also this method 
    {
            cout<<x<<endl;
    }
}