/**
Given an array, arr. The task is to find the largest element in it.

Examples:

Input: arr = [1, 8, 7, 56, 90]
Output: 90
Explanation: The largest element of the given array is 90.
Input: arr = [5, 5, 5, 5]
Output: 5
Explanation: The largest element of the given array is 5.
Input: arr = [10]
Output: 10
Explanation: There is only one element which is the largest.
Expected Time Complexity: O(n)
Expected Space Complexity: O(1)
  */
/**
Enter the n value : 5

 The arr[0] value : 5

 The arr[1] value : 4

 The arr[2] value : 78

 The arr[3] value : 5

 The arr[4] value : 6
78
  */
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int size = arr.size(), largest =arr[0], i;
        for(i = 1; i<size;i++){
            if(largest < arr[i]){
                largest = arr[i];
            }
        }
        return largest;
    }
};

int main(){
    int n,a;
    cout<<"Enter the n value : ";
    cin>>n;
    
    vector<int>arr;
    for(int i = 0;i<n;i++){
        cout<<"\n The arr["<<i<<"] value : ";
        cin >> a;
        arr.push_back(a);
    }
    
    Solution s;
    int largest = s.largest(arr);
    cout<<largest;
    return 0;
}
