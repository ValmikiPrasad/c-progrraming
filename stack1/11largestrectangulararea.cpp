#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> arr={2,1,5,6,2,3};
    //  vector<int> arr={2,2,2,2,2,2};
    int n=arr.size();

    vector<int> ans1(n);
    stack<int> s1;
    s1.push(-1);
    for (int i = n-1; i >=0; i--)
    {
      
        int curr=arr[i];
        while (s1.top()!=-1 && arr[s1.top()]>=curr)
        {
           
            s1.pop();

        }
        ans1[i]=s1.top();

        s1.push(i);
        
    }

    stack<int> s2;
    vector<int> ans2(n);
    s2.push(-1);
    for (int i = 0; i <n; i++)
    {
      
        int curr=arr[i];
        while (s2.top()!=-1 && arr[s2.top()]>=curr)
        {
           
            s2.pop();

        }
        ans2[i]=s2.top();
        s2.push(i);
        
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
        cout<<ans1[i]<<" ";
    }
     cout<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<ans2[i]<<" ";
    }
    cout<<endl;
    int area=0;
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        int length=arr[i];
        if (ans1[i]==-1)
        {
            /* code */
            ans1[i]=arr.size();
        }
        
        int breadth=ans1[i] - ans2[i] -1;
        area=max(area,length*breadth);
    }
    cout<<area<<endl;
    

}