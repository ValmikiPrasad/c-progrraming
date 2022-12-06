#include <iostream>
#include <stack>

using namespace std;
bool check(string str){
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        /* code */
        char ch = str[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            /* code */
            s.push(ch);
        }
        else
        {

            if (ch==')')
            {
                /* code */
                bool isredundant=true;

                while ((s.top())!='(')
                {
                    /* code */
                    // char top=s.top();
                    // if (top == '+' || top == '-' || top == '*' || top == '/')
                    // {
                        /* code */
                        isredundant=false;
                    // }  
                    s.pop();                 
                }

                if (isredundant==true)
                {
                    /* code */
                    return true;
                }
                s.pop();
                
            }
            
        }
    }
    return false;
}
int main()
{
    string str;
    cin >> str;
    if(check(str)){
        cout<<"redundant "<<endl;
    }
    else{
        cout<<"not redundant "<<endl;
    }
}