// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
i
id
idv
*/
void printPattern(string s)
{
   //Your code here
   int n = s.length();
   for(int i = 0;i<n;i++){
       int mid = n/2,temp_mid = mid,count = 0;
       string str;
       for(int j = 0; j<=i;j++){
           if(mid>=j){
               str = str + s[temp_mid];
               temp_mid++;
           }else{
               str = str + s[count];
               count++;
           }
       }
       cout<<"\n";
       cout<<str;
   }
}
int main() {
    string str;
    cout<<"Enter the n value : ";
    cin>>str;
    printPattern(str);

    return 0;
}
