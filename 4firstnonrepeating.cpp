// Q...
// find first non repeating char in a stream

#include<iostream>
#include<vector>
#include<map>
#include<iterator>
#include<queue>
using namespace std;
int main(){
    string s;
    cin>>s;
    queue<char> q;
    map<char,int> count;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     /* code */
    //     count[s[i]]++;
    // }
    // map<char, int>::iterator itr;
    // cout << "\nThe map gquiz1 is : \n";
    // cout << "\tKEY\tELEMENT\n";
    // for (itr = count.begin(); itr != count.end(); ++itr) {
    //     cout << '\t' << itr->first << '\t' << itr->second
    //          << '\n';
    // }
    // cout << endl;
    vector<char> ans;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        count[s[i]]++;
        q.push(s[i]);

        while (!(q.empty()))
        {
            /* code */
            if (count[q.front()]>1)
            {
                /* code */
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }
        if (q.empty())
        {
            /* code */
            ans.push_back('#');
        }
        

    }
    for (int i = 0; i < ans.size(); i++)
    {
        /* code */
        cout<<ans[i];
    }
    cout<<endl;
    
    
    
}