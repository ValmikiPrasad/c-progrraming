#include<iostream>
#include<stack>

using namespace std;
int main(){

    string str="VALMIKI PRASAD";
    stack<char> s1;
    for (int i = 0; i < str.length(); i++)
    {
        /* code */
        s1.push(str[i]);
    }
    string ans="";
    while (!(s1.empty()))
    {
        /* code */
        ans.push_back(s1.top());
        s1.pop();
    }
    cout<<ans<<endl;
    

}