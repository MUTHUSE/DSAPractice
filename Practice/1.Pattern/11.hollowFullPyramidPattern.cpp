// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class base{
    private:
        int i,j;
    public:
        void pattern(int n){
            for(i=0;i<n;i++){
                for(j=i;j<n-1;j++){
                    cout<<" ";
                }
                for(j=0;j<(2*i)+1;j++){
                    if(i==0 && i==n-1){
                        cout<<"*";
                    }
                }
                cout<<"\n";
            }
        }
};

int main() {
    int n;
    cout<<"Enter the n value : ";
    cin>>n;
    cout<<"\n Hollow Full Pyramid Pattern \n";
    
    base B;
    B.pattern(n);

    return 0;
}
