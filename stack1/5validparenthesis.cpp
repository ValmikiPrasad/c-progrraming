#include <iostream>
#include <stack>

using namespace std;
bool check(string str){
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        /* code */
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            /* code */
            s.push(ch);
        }
        else
        {

            if (!(s.empty()))
            {
                /* code */
                char top = s.top();
                if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']'))
                {
                    /* code */
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if ((s.empty()))
    {
        /* code */
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str;
    cin >> str;
    if(check(str)){
        cout<<"balanced "<<endl;
    }
    else{
        cout<<"unbalanced "<<endl;
    }
}