/*
Given an 0-indexed array of integers arr[] of size n, find its peak element and return it's index. An element is considered to be peak if it's value is greater than or equal to the values of its adjacent elements (if they exist).

Note: The output will be 1 if the index returned by your function is correct; otherwise, it will be 0.

Examples :

Input: n = 3, arr[] = {1, 2, 3} 
Output: 1
Explanation: If the index returned is 2, then the output printed will be 1. Since arr[2] = 3 is greater than its adjacent elements, and there is no element after it, we can consider it as a peak element. No other index satisfies the same property, so answer will be printed as 0.
Input: n = 7, arr[] = {1, 1, 1, 2, 1, 1, 1}
Output: 1
Explanation: In this case there are 5 peak elements with indices as {0,1,3,5,6}. Returning any of them will give you correct answer.
  */

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int peakElement(int *arr, int n)
    {
        // Your code here
        int peak = 0;
        for(int i = 1; i<n;i++){
           if(arr[i-1]<=arr[i] && ((i+1 != n && arr[i]>=arr[i+1]) || i+1 == n)){
               peak = i;
           }
        }
        return peak;
       
    }
};

int main(){
    int n;
    cout<<"Enter the n value : ";
    cin>>n;
    
    int a[n];
    for(int i = 0;i<n;i++){
        cout<<"\n The a["<<i<<"] value : ";
        cin>>a[i];
    }
    
    Solution s;
    int test_peak = s.peakElement(a, n);
    
    int peak;
    cout<<"\n Enter the peak element : ";
    cin>>peak;
    
    if(peak == a[test_peak]){
        cout<<1;
    }else{
        cout<<0;
    }
}
