#include<iostream>
using namespace std;
int main(){
    // int x = 10;
    // cout<<x<<endl;     // print 10
    // cout<<&x<<endl;   //   print address
    // cout<<*(&x);      // print 10
  // Integer type ke address ko print karne ke liye
    // int *ptr;
    // ptr = &x;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

////   CHAR type ke address print karne ke liye
    // char x = 'A';
    // cout<<x<<endl;
    // char *ptr;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;




    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    // for(int i=0; i<10; i++)
    // {
    //       cout<<(&A[i])<<endl;
    //     cout<<*(&A[i])<<endl;

    // }

    int *ptr= &A[0];
    cout<<ptr<<endl;
    ptr = A;
    cout<<ptr<<endl;
    
        // cout<<*ptr<<endl;


        for(int i=0; i<10; i++){
 cout<<*(ptr+i)<<endl;
        }
        





return 0;
}