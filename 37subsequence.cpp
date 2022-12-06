// 78..leetcode
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void subset(string nums,int index,string output,vector<string> &ans){
    if (index>=nums.size())
    {
        if (output.length()>0)
        {
           ans.push_back(output);
        }       
        return;
    }
    // exclude
    subset(nums,index+1,output,ans);

    // include
    char element=nums[index];
    output.push_back(element);
    subset(nums,index+1,output,ans);
}
int main(){

    string str;
    cin>>str;
    vector<string> ans;
    string output="";
    int index=0;
 
    subset(str,index,output,ans);
    cout<<"[";
    for (int i = 0; i < ans.size(); i++)  

    { 
        cout << ans[i] << ", "; 
    }
    cout<<"]";
}