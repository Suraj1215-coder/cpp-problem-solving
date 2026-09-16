#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:\n";
    cin>>num;
    
    while(num >= 9){
      int  sum = 0;
        while(num !=0){
            int digit = num % 10;
            num = num / 10;
            sum += digit;
        }
        num = sum;
    }
    cout<<"Sum of digit ="<<num;
        return 0;
}