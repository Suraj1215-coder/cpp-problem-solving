#include<iostream>
#include<vector>
using namespace std;
void mergeArray(const vector<int>& A, int m, const vector<int>& B, int n)
{
    vector<int>C;
    int i = 0, j = 0;
    while(i<m && j<n)
    {
        if(A[i]<B[j])
        {
            C.push_back(A[i]);
            i++;
            
        }
        else
        {   if(B[j]<A[i]){
            C.push_back(B[j]);
            j++;
        }
        else{
             C.push_back(A[i]);
             i++;
             j++;
        }
            
        }
    }
    
    for(const int value : C)
    {
        cout<<value<<" ";

    }
    
}

int main()
{
   vector<int> A;
   A.push_back(1);
   A.push_back(2);
   A.push_back(50);
   A.push_back(60);
   A.push_back(110);
   A.push_back(800);

   vector<int>B;
   B.push_back(30);
   B.push_back(40);
   B.push_back(50);
   B.push_back(60);
   B.push_back(60);
   B.push_back(80);
   mergeArray(A, A.size(), B, B.size());
}
