#include<iostream>
#include<stack>
using namespace std;

void insertAtEnd(stack<int>&stack,int x){

    if (stack.empty())
    {
        /* code */
        stack.push(x);
        return;
    }
    int num=stack.top();
    stack.pop();

    insertAtEnd(stack,x);

    stack.push(num);
}
void solve(stack<int>&stack){
    if (stack.empty())
    {
        /* code */
        return;
    }
    int num=stack.top();
    stack.pop();

    solve(stack);
    insertAtEnd(stack,num);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    solve(s);

    while (!(s.empty()))
    {
        /* code */
        cout<<s.top()<<endl;
        s.pop();
    }

}