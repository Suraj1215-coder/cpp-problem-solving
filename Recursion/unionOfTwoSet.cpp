#include<iostream>
using namespace std;
int mergeArray(int A[], int m, int B[], int n, int C[])
{
    int i = 0, j = 0, k = 0;
    while(i<m && j<n)
    {
        if(A[i]<B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
            if(B[j]<A[i])
            {
            C[k] = B[j];
            j++;
            k++;
            }  
            else
             {
             C[k] = B[j];
            j++;
            k++;
            }
        }
        }
    
    while(i<m)
    {
        C[k] = A[i];
        i++;
        k++;
    }
    while(j<n)
    {
        C[k] = B[j];
        j++;
        k++;
    }
    return k;
}


int main()
{
    int A[] = {2,4,6,10,11};
    int B[] = {5,9,10,11};
    int C[sizeof(A) / sizeof(A[0]) + sizeof(B) / sizeof(B[0])] = {};
    int result = mergeArray(A,4,B,4,C);
    for (int i = 0; i < result; i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;
    return 0;
}
