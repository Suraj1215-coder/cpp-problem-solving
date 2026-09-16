#include<bits/stdc++.h>
using namespace std;
void printMax(int arr[], int n, int idx, int max)
{
    if(idx == n)
    cout<<max;
    return;
    if(max<arr[idx]) max = arr[idx];
    printMax(arr,n,idx+1,max);
}
int main(){
    int arr[] = {1,2,3,4,5,2,6,9,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMax(arr, n, 0, INT_MIN);
}