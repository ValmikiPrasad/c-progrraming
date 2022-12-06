#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){

    vector<int> arr= {2,1,5,6,4,8};
    

    int n=arr.size();
    vector<int> ans(n);
    stack<int> s;
    s.push(-1);
    for (int i = n-1; i >=0; i--)
    {
        /* code */
        int curr=arr[i];
        while (s.top()>=curr)
        {
            /* code */
            s.pop();

        }
        ans[i]=s.top();
        s.push(curr);
        
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<ans[i]<<" ";
    }
}