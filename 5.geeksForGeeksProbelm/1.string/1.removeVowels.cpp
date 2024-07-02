#include <bits/stdc++.h>
using namespace std;
string removeVowels(string S) 
	{
	    string new_S;
	    // Your code goes here
	    for(int i = 0;i<S.size();i++){
	        if(S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u'){
	            new_S.push_back(S[i]);
	        }
	    }
	   return new_S;
	}
int main() {
    string n = "welcome to geeksforgeeks";
    string S = removeVowels(n);
    cout<<"The String S : "<<S;
    return 0;
}
