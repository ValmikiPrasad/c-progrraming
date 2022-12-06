// 78..leetcode
#include <iostream>
#include <vector>
using namespace std;

void subset(vector<int> nums, int index, vector<int> output, vector<vector<int>> &ans)
{
    if (index >= nums.size())
    {
        /* code */
        ans.push_back(output);
        return;
    }
    // exclude
    subset(nums, index + 1, output, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    subset(nums, index + 1, output, ans);
}
int main()
{
    vector<int> nums;

    for (int i = 0; i < 3; i++)
    {
        /* code */
        int n;
        cin >> n;
        nums.push_back(n);
    }
    int index = 0;
    vector<int> output;
    vector<vector<int>> ans;
    subset(nums, index, output, ans);
    cout << "[";
    for (int i = 0; i < ans.size(); i++)

    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)

        {

            cout << ans[i][j] << ", ";
        }
        cout << "],";
    }
    cout << "]";
}