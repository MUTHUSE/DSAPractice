/**
Given an array arr of positive integers. Reverse every sub-array group of size k.

Note: If at any instance, k is greater or equal to the array size, then reverse the entire array. You shouldn't return any array, modify the given array in place.

Examples:

Input: k = 3, arr= [1, 2, 3, 4, 5]
Output: [3, 2, 1, 5, 4]
Explanation: First group consists of elements 1, 2, 3. Second group consists of 4,5.
Input: k = 5, arr = [5, 6, 8, 9]
Output: [9, 8, 6, 5]
Explnation: Since k is greater than array size, the entire array is reversed.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
  */
/**
 Enter the n value : 5

 The a[0] value : 1

 The a[1] value : 2

 The a[2] value : 3

 The a[3] value : 4

 The a[4] value : 5

 Enter the sub array size : 6
5 4 3 2 1 
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void reverseInGroups(vector<long long int> &arr, int k) {
        // code here
        int size = arr.size();
        int count = k, inc = 1;
        vector<long long int>temp;
        temp = arr;
        for(int i = 0; i< size; i++){
            if(count == 0){
                inc++;
                count = inc*k;
            }
            while(count>size){
                count--;
            }
            arr[i] = temp[count-1];
            count--;
        }
    }
};

int main(){
    int n,a;
    cout<<"Enter the n value : ";
    cin>>n;
    
    vector<long long int>temp;
    
    for(int i = 0;i<n;i++){
        cout<<"\n The a["<<i<<"] value : ";
        cin>>a;
        temp.push_back(a);
    }
    
    int k;
    cout<<"\n Enter the sub array size : ";
    cin>>k;
    
    Solution s;
    s.reverseInGroups(temp, n);
    for(int i = 0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}
