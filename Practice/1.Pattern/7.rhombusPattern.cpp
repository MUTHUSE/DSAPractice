// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class base{
    private:
        int i,j;
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
};
class derived:public base{
    public:
        void pattern(){
            cout<<"Derived Class";
        }
};
int main() {
    int n;
    cout<<"Enter the n value : ";
    cin>>n;
    cout<<"\n Rhombus Pattern \n";
    
    derived d;
    base *b = NULL;
    b = &d;
    b->pattern(n);
    return 0;
}
