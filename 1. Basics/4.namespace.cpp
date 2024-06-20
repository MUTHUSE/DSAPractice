#include <bits/stdc++.h>
using namespace std;
namespace name1{
    string name = "Muthu";
    int age = 24;
}
namespace name2{
    string name = "Selvi";
}
namespace name3{
    string name = "Priya Darshini";
    int age = 21;
}
using namespace name3;
int main()
{
    cout<<name1::name;
    cout<<" "<<name1::age;
    
    cout<<"\n"<<name2::name;
    
    cout<<"\n"<<name<<" "<<age;

    return 0;
}
