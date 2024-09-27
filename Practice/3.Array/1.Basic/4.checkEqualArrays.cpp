/**
Given two arrays arr1 and arr2 of equal size, the task is to find whether the given arrays are equal. Two arrays are said to be equal if both contain the same set of elements, arrangements (or permutations) of elements may be different though.
Note: If there are repetitions, then counts of repeated elements must also be the same for two arrays to be equal.

Examples:

Input: arr1[] = [1, 2, 5, 4, 0], arr2[] = [2, 4, 5, 0, 1]
Output: true
Explanation: Both the array can be rearranged to [0,1,2,4,5]
Input: arr1[] = [1, 2, 5], arr2[] = [2, 4, 15]
Output: false
Explanation: arr1[] and arr2[] have only one common value.
Expected Time Complexity: O(n)
Expected Space Complexity: O(n)
  */
/**
Enter the n value : 3
3

 The a1[0] value : 1

 The a1[1] value : 2

 The a1[2] value : 5

 The a2[0] value : 1

 The a2[1] value : 2

 The a2[2] value : 5
1
  */
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    // Function to check if two arrays are equal or not.
    bool check(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int i;
        map<int,int>temp;
        int size = arr1.size();
        for(i=0;i<size;i++){
            temp[arr1[i]]+=1;
        }
        for(i=0;i<size;i++){
            if(temp[arr2[i]] != 0){
                temp[arr2[i]]-=1;
            }else{
                return false;
            }
        }
        return true;
    }
};

int main(){
    int n,m,a;
    cout<<"Enter the n value : ";
    cin>>n>>m;
    
    vector<int>a1;
    vector<int>a2;
    for(int i = 0;i<n;i++){
        cout<<"\n The a1["<<i<<"] value : ";
        cin >> a;
        a1.push_back(a);
    }
    for(int j = 0;j<m;j++){
        cout<<"\n The a2["<<j<<"] value : ";
        cin >> a;
        a2.push_back(a);
    }
    
    Solution s;
    bool test_peak = s.check(a1, a2);
    cout<<test_peak;
    return 0;
}
