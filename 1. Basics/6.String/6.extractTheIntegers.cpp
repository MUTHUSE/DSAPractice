#include <bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s)
{
    // code here
    vector<string>temp;
    int n = s.size();
    string add;
    for(int i = 0; i< n; i++){
        int test = s[i];;
        if(48 <= test && test <=57 ){
            add = add + s[i];
        }else{
            if(!add.empty()){
                temp.push_back(add);
                add.clear();
            }
        }
    }
    if(!add.empty()){
        temp.push_back(add);
        add.clear();
    }
    if(temp.empty()){
        temp.push_back("No Integers");
    }
    
    return temp;
}
int main() {
    vector temp = extractIntegerWords("1: Prakhar Agrawal, 2: Manish Kumar Rai, 3: Rishabh Gupta56");
    for(auto i : temp){
        cout<<i<<"\n";
    }
    return 0;
}
