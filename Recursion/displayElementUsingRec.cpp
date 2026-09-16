#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int> arr, int i)
{
   int n=arr.size();
   if(i<n)
   {
    
    printArray(arr, i+1);
    cout<<arr[i]<<",";
   }
}
int main()
{



    vector<int> arr(5);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    printArray(arr,5);
}