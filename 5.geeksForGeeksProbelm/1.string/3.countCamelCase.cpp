#include <bits/stdc++.h>
using namespace std;
int countCamelCase (string s)
{
	//code here.
	int count = 0;
	for(int j = 0; j<s.size(); j++){
	    int i = s[j] + 0;
	    if(65 <= i && i <= 96){
	        count++;
	    }
	}
	return count;
}
int main() {
    string n = "Geeks";
    int S = countCamelCase(n);
    cout<<"The String S : "<<S;
    return 0;
}
