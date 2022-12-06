// Q...find first -ve number in subarray of size k;
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int main()
{

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
    // processing first subarray
    for (int i = 0; i < k; i++)
    {
        /* code */
        if (arr[i] < 0)
        {
            /* code */
            dq.push_back(i);
        }
    }
    if (!(dq.empty()))
    {
        /* code */
        ans.push_back(arr[dq.front()]);
    }
    else
    {
        ans.push_back(0);
    }
    // processing rest of the window;
    for (int i = k; i < arr.size(); i++)
    {
        /* code */
        // removal
        if (!(dq.empty()) && i - dq.front() >= k)
        {
            /* code */
            dq.pop_front();
        }

        // addition

        if (arr[i] < 0)
        {
            /* code */
            dq.push_back(i);
        }


        if (!(dq.empty()))
        {
            /* code */
            ans.push_back(arr[dq.front()]);
        }
        else
        {
            ans.push_back(0);
        }
    }
    int x=ans.size();
    for (int i = 0; i < x; i++)
    {
        /* code */
        cout<<ans[i]<< " ";
    }
    cout<<endl;
}