#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name("Muthu selvi");
    cout<<"\n String Data : ";
    for(auto it = name.begin(); it != name.end(); it++){
        cout<<*it<<" ";
    }
    
    cout<<"\n Iteration Method : ";
    for(string::iterator it = name.begin(); it != name.end(); it++){
        cout<<*it<<" ";
    }
    
    cout<<"\n Another Method : ";
    for(auto it:name){
        cout<<it<<" ";
    }
    
    cout<<"\n Reverse Iteration : ";
    for(string::reverse_iterator it = name.rbegin(); it != name.rend(); it++){
        cout<<*it<<" ";
    }
    return 0;
}
