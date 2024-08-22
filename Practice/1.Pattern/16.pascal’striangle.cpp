// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class base{
    private:
        int i,j;
    public:
        int pattern(int n){
            int a[n][n];
            for(i=0;i<n;i++){
                for(j=0;j<=i;j++){
                    if(j==0 || j==i){
                        a[i][j]=1;
                        cout<<a[i][j];
                    }else{
                        a[i][j]=0;
                    }
                }
            }
            return a;
        }
};
int main() {
    int n;
    cout<<"Enter the n value : ";
    cin>>n;
    cout<<"\n Pascal"<<"'"<<"s Triangle \n";
    base B;
    int temp[n][n] = B.pattern(n);
    for(auto row : temp){
        for(auto val : row){
            cout<<val;
        }
        cout<<"\n";
    }

    return 0;
}
