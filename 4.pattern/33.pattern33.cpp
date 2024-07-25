// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
/*
  string.tring..ring...ing....ng.....g
  */
using namespace std;
string triDownwards(string S) {
    // code here
    int n = S.length();
     string str1;
    for(int i = 0; i<n;i++){
        string str;
        for(int j = 0; j<i;j++){
            str.append(".");
        }
        for(int j = i; j<n;j++){
            str = str + S[j];
        }
        str1.append(str);
    }
    return str1;
}
int main() {
    string str;
    cout<<"Enter the n vale : ";
    cin>>str;
    string temp = triDownwards(str);
    cout<<"\n"<<str;

    return 0;
}
