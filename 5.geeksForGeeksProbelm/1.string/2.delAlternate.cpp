#include <bits/stdc++.h>
using namespace std;
string delAlternate(string S) {
    // code here
    string temp;
    for(int i = 0; i< S.size(); i=i+2){
        temp.push_back(S[i]);
    }
    return temp;
}
int main() {
    string n = "Geeks";
    string S = delAlternate(n);
    cout<<"The String S : "<<S;
    return 0;
}
