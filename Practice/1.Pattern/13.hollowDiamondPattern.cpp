// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class base{
    private:
        int i,j,count,start,j_start;
        char ch;
    public:
        void pattern(int n){
            for(i=0;i<(2*n)-1;i++){
                if(i>=n){
                    j_start = 0;
                    start = i-n+1;
                }else{
                    j_start = i;
                    start = n-1;
                }
                for(j=i;j<start;j++){
                    cout<<" ";
                }
                for(j=0;j<(2*i)+1;j++){
                    if(j==0 || j == (2*i)){
                        cout<<"*";
                    }else{
                        cout<<" ";
                    }
                }
                cout<<"\n";
            }
        }
        void patternNum(int n){
            for(i=0;i<n;i++){
                count = 1;
                for(j=i;j<n-1;j++){
                    cout<<" ";
                }
                for(j=0;j<(2*i)+1;j++){
                    if(j==0 || i == 0 || i == n-1 || j == (2*i)){
                        cout<<count;
                    }else{
                        cout<<" ";
                    }
                    count++;
                }
                cout<<"\n";
            }
        }
        void patternChar(int n){
            for(i=0;i<n;i++){
                ch = 'A';
                for(j=i;j<n-1;j++){
                    cout<<" ";
                }
                for(j=0;j<(2*i)+1;j++){
                    if(j==0 || i == 0 || i == n-1 || j == (2*i)){
                        cout<<ch;
                    }else{
                        cout<<" ";
                    }
                    ch+=1;
                }
                cout<<"\n";
            }
        }
};

int main() {
    int n;
    cout<<"Enter the n value : ";
    cin>>n;
    cout<<"\n Hollow Diamond Pattern \n";
    
    base B;
    B.pattern(n);
    B.patternNum(n);
    B.patternChar(n);

    return 0;
}
