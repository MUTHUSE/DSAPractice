// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
/*
  1 121 12321 1234321 123454321 12345654321
  */
using namespace std;
vector<string> numberPattern(int N)
{
    // Write Your Code here
    vector<string>temp;
    for(int i = 0;i<N;i++){
        int count = 0;
        int mid = (2*i+1)/2;
        string ans;
        for(int j = 0;j<2*i+1;j++){
            if(mid>=j){
                count++;
            }else{
                count--;
            }
            ans = ans + to_string (count);
        }
        temp.push_back(ans);
    }
    return temp;
}
int main() {
    int n;
    cout<<"Enter the n vale : ";
    cin>>n;
    vector<string>temp = numberPattern(n);
    
    for(auto i : temp){
        cout<<i<<"\n";
    }

    return 0;
}
