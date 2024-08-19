// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
  Enter the n value : 4

  Floyd's Triangle 
1
23
456
78910
A
BC
DEF
GHIJ
*/
class base{
    private:
        int i,j,count;
        char ch;
    public:
        void pattern(int n){
            count = 1;
            for(i=0;i<n;i++){
                for(j=0;j<=i;j++){
                    cout<<count;
                    count+=1;
                }
                cout<<"\n";
            }
        }
        void patternChar(int n){
            ch = 'A';
            for(i=0;i<n;i++){
                for(j=0;j<=i;j++){
                    cout<<ch;
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
    cout<<"\n  Floyd"<<"'"<<"s Triangle \n";
    
    base b;
    b.pattern(n);
    b.patternChar(n);

    return 0;
}
