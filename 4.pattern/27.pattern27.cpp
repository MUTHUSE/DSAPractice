/**
 Enter the n value : 5
ABCDE
F$$$G
H$$$I
J$$$K
LMNOP
*/
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
vector<string> findThePattern(int N) {
    // code here
    vector<string>temp;
    char c = 'A';
    string temp1;
    for(int i = 0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i == 0 || i == N-1){
                temp1 = temp1+c;
                c++;
            }else{
                if(j == 0 || j == N-1){
                    temp1 = temp1+c;
                    c++;
                }else{
                    temp1 = temp1+"$";
                }
            }
        }
        temp.push_back(temp1);
        temp1.clear();
    }
    return temp;
}
int main() {
    int n;
    cout<<"\n Enter the n value : ";
    cin>>n;
    
    vector ans = findThePattern(n);
    
    for(auto i : ans){
        cout<<i<<"\n";
    }

    return 0;
}
