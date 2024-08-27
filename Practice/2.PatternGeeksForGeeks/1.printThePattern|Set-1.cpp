/*
You are given a number n. You need to print the pattern for the given value of n.

For n = 2 the pattern will be 
2 2 1 1
2 1

For n = 3 the pattern will be 
3 3 3 2 2 2 1 1 1
3 3 2 2 1 1
3 2 1

Note: Instead of printing a new line print a "$" without quotes. After printing the total output, end of the line("$") is expected.

Examples :

Input: 2
Output: 2 2 1 1 $2 1 $

Input: 3
Output: 3 3 3 2 2 2 1 1 1 $3 3 2 2 1 1 $3 2 1 $
*/

/*
  Enter the n value : 3

 Print the pattern | Set-1 
333222111
332211
321
  */
#include <bits/stdc++.h>
using namespace std;

void printPat(int n) {
    // Your code here
    for(int i = n; i>0;i--){
        int count = 1;
        int value = n;
        for(int j = 0; j<n*i;j++){
            cout<<value;
            if(count == i){
                count = 1;
                value-=1;
            }else{
                count+=1;
            }
        }
        cout<<"\n";
    }
}
int main() {
    int n;
    cout<<"Enter the n value : ";
    cin>>n;
    
    cout<<"\n Print the pattern | Set-1 \n";
    
    printPat(n);

    return 0;
}
