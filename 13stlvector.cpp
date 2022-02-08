// #include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

vector<int> v={5,9,8,6,47,3};
    cout<<"size of the array is : "<<v.size()<<endl;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;

    
    for(int x : v){
        cout<<x<<" ";
    }
    v.push_back(10);

    cout<<endl;
    for(int x : v){
        cout<<x<<" ";
    }
    cout<< endl <<"new size of the array is : "<<v.size()<<endl;

    sort(v.begin(),v.end());
    cout<<"sorted array is : "<<endl;
    for(int x : v){
        cout<<x<<" ";
    }

    cout<<endl<<"enter the key value"<<endl;
    int key;
    cin>>key;
    bool present=binary_search(v.begin(),v.end(),key);
    if (present)
    {
        /* code */
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"oops! element not founded"<<endl;
    }
    



    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(123);

    for(int x : v){
        cout<<x<<" ";
    }
    cout<< endl ;

    int key2;
    cout<<"enter the vlaue,that u want to find first element greater or equal to the entered value in the array"<<endl;
    cin>>key2;
    auto it1 =lower_bound(v.begin(),v.end(),key2);
    cout<<"element in array which is greater or equal to the entered value"<<endl;
    cout<<*it1<<endl;
    // int *p=(&*it1);
    // cout<<"address of it1 : "<<p<<endl;
    auto it2 =upper_bound(v.begin(),v.end(),key2);
    cout<<"element in array which is strictly greater than entered value "<<endl;
     cout<<*it2<<endl;

     cout<<"number of occurance of the value: "<<it2-it1<<endl;

}