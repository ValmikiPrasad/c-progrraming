// brute_force approach
#include<iostream>
#include<vector>
#include<stack>

using namespace std;
int main(){

    vector<int> arr= {2,1,5,6,4,8};
    
    
    int n=arr.size();

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }


    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int value=arr[i];

        int j;
        for ( j = i+1; j < n; j++)
        {
            /* code */
            if (arr[j]<value)
            {
                /* code */
                ans.push_back(arr[j]);
                break;
            }
            
        }
        if (j==n)
        {
            /* code */
            ans.push_back(-1);
        }
        
        
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<ans[i]<<" ";
    }

}