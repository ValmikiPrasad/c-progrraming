#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;


    
int main(){
    vector<int> v={5,9,8,6,47,3};
    int key2;
    cout<<"enter the vlaue,that u want to find first element greater or equal to the entered value in the array"<<endl;
    cin>>key2;
    auto it1 =lower_bound(v.begin(),v.end(),key2);
    cout<<"element in array which is greater or equal to the entered value"<<endl;
    cout<<*it1<<endl;
}