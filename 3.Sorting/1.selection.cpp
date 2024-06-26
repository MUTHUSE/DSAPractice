#include<bits/stdc++.h>
using namespace std;
/**
 * Time Complexity : O(N2)
*/
int main(){
    int n;
    cout<<"\n Enter the n value : "; // 6
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"\n Enter the a["<<i<<"] value : ";
        cin>>a[i];
    }
    cout<<"\n Before Sorting array value : "; // 13, 46, 24, 52, 20, 9
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i =0 ;i<n-1;i++){
        int min = i;
        for(int j=i;j<n;j++){
            if(a[min]>a[j]){
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    cout<<"\n After Sorting array value : "; // 9, 13, 20, 24, 46, 52
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
