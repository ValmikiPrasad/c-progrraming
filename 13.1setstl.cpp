#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    set<int> s={2,8,9,6,6,5,5,1,2};
    for(auto x : s){
        cout<<x<<endl;
    }
    s.insert(-1);
    s.insert(-10);
    cout<<endl;
    for(auto x : s){
        cout<<x<<" ";
    }
    cout<<endl<< " size of the set is : "<<s.size()<<endl;
    
}