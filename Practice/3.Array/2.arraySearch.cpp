/*
Given an array, arr of n integers, and an integer element x, find whether element x is present in the array. Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.

Examples:

Input: arr[] = [1, 2, 3, 4], x = 3
Output: 2
Explanation: There is one test case with array as [1, 2, 3 4] and element to be searched as 3. Since 3 is present at index 2, the output is 2.
Input: arr[] = [10, 8, 30, 4, 5], x = 5
Output: 4
Explanation: For array [1, 2, 3, 4, 5], the element to be searched is 5 and it is at index 4. So, the output is 4.
Input: arr[] = [10, 8, 30], x = 6
Output: -1
Explanation: The element to be searched is 6 and its not present, so we return -1.
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1). 
  */

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 5

 The a[0] value : 13

 The a[1] value : 14

 The a[2] value : 75

 The a[3] value : 25

 The a[4] value : 14

 Enter to find a element : 14
1
  */
class Solution
{
    public:
    int search(vector<int>& arr, int x) {

        // Your code here
        int n = arr.size();
        for(int i = 0;i<n;i++){
            if(arr[i] == x){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    int n;
    cout<<"Enter the n value : ";
    cin>>n;
    
    vector<int>a;
    int temp;
    for(int i = 0;i<n;i++){
        cout<<"\n The a["<<i<<"] value : ";
        cin>>temp;
        a.push_back(temp);
    }
    
    int element;
    cout<<"\n Enter to find a element : ";
    cin>>element;
    
    Solution s;
    int test_peak = s.search(a, element);
    cout<<test_peak;
}
