/**
Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m, where both arrays may contain duplicate elements. The task is to determine whether array a2 is a subset of array a1. It's important to note that both arrays can be sorted or unsorted. Additionally, each occurrence of a duplicate element within an array is considered as a separate element of the set.

Example 1:

Input:
a1[] = {11, 7, 1, 13, 21, 3, 7, 3}
a2[] = {11, 3, 7, 1, 7}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

Example 2:

Input:
a1[] = {1, 2, 3, 4, 4, 5, 6}
a2[] = {1, 2, 4}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

Example 3:

Input:
a1[] = {10, 5, 2, 23, 19}
a2[] = {19, 5, 3}
Output:
No
Explanation:
a2[] is not a subset of a1[]
*/

/**
Enter the n value : 6
5

 The a1[0] value : 1

 The a1[1] value : 2

 The a1[2] value : 3

 The a1[3] value : 4

 The a1[4] value : 4

 The a1[5] value : 5

 The a2[0] value : 1

 The a2[1] value : 2

 The a2[2] value : 4

 The a2[3] value : 4

 The a2[4] value : 4
No
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    string isSubset(int a1[], int a2[], int n, int m) {
        int count = 0;
        int i;
        map<int,int>mpp;
        for(i=0;i<n;i++){
            mpp[a1[i]]+=1;
        }
        for(i=0;i<m;i++){
            if(mpp[a2[i]] != 0){
                mpp[a2[i]]-=1;
            }else{
                return "No";
            }
        }
        return "Yes";
    }
};

int main(){
    int n,m;
    cout<<"Enter the n value : ";
    cin>>n>>m;
    
    int a1[n],a2[m];
    for(int i = 0;i<n;i++){
        cout<<"\n The a1["<<i<<"] value : ";
        cin>>a1[i];
    }
    for(int j = 0;j<m;j++){
        cout<<"\n The a2["<<j<<"] value : ";
        cin>>a2[j];
    }
    
    Solution s;
    string test_peak = s.isSubset(a1, a2, n, m);
    cout<<test_peak;
    return 0;
}
