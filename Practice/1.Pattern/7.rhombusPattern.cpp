// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*
    Enter the n value : 5

 Rhombus Pattern 
     * * * * * 
    * * * * * 
   * * * * * 
  * * * * * 
 * * * * * 
     1 2 3 4 5 
    1 2 3 4 5 
   1 2 3 4 5 
  1 2 3 4 5 
 1 2 3 4 5 
     A B C D E 
    A B C D E 
   A B C D E 
  A B C D E 
 A B C D E 
    */
class base{
    private:
        int i,j,count;
        char ch;
    public:
        void pattern(int n){
            for(i=0;i<n;i++){
                for(j=i;j<n;j++){
                    cout<<" ";
                }
                for(j=0;j<n;j++){
                    cout<<"* ";
                }
                cout<<"\n";
            }
        }
        void patternNum(int n){
            for(i=0;i<n;i++){
                for(j=i;j<n;j++){
                    cout<<" ";
                }
                count = 1;
                for(j=0;j<n;j++){
                    cout<<count<<" ";
                    count+=1;
                }
                cout<<"\n";
            }
        }
        void patternChar(int n){
            for(i=0;i<n;i++){
                for(j=i;j<n;j++){
                    cout<<" ";
                }
                ch = 'A';
                for(j=0;j<n;j++){
                    cout<<ch<<" ";
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
    cout<<"\n Rhombus Pattern \n";
    
    base b;
    b.pattern(n);
    b.patternNum(n);
    b.patternChar(n);
    return 0;
}
