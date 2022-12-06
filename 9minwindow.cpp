// q...
// find min in each subarray of size k;

#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(-2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(-5);
    arr.push_back(6);

    vector<int> ans;
    
    int k;
    cout << "enter the value of k : ";
    cin >> k;

    deque<int> dq;
    // processing first window
    for (int i = 0; i < k; i++)
    {
        /* code */
        while (!(dq.empty()) && arr[dq.back()]>=arr[i])
        {
            /* code */
            dq.pop_back();

        }
        dq.push_back(i);       
    }

    ans.push_back(arr[dq.front()]);

    // processing rest of queue;

    for (int i = k; i < arr.size(); i++)
    {
        /* code */
        // removal
        while (!(dq.empty()) && i - dq.front() >= k)
        {
            /* code */
            dq.pop_front();
        }
        // addition
         while (!(dq.empty()) && arr[dq.back()]>=arr[i])
        {
            /* code */
            dq.pop_back();

        }
        dq.push_back(i);
        ans.push_back(arr[dq.front()]);
    }
    int x=ans.size();
    for (int i = 0; i < x; i++)
    {
        /* code */
        cout<<ans[i]<< " ";
    }
    cout<<endl;
    
}