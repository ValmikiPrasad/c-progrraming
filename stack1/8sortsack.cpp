#include<iostream>
#include<stack>
using namespace std;


void sorted_insert(stack<int>&stack,int num){
    if (stack.empty() || stack.top()<num)
    {
        /* code */
        stack.push(num);
        return;
    }
    int x=stack.top();
    stack.pop();

    sorted_insert(stack,num);
    stack.push(x);
    

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
    sorted_insert(stack,num);
}
int main(){
    stack<int> s;
    s.push(15);
    s.push(2);
    s.push(8);
    s.push(41);
    s.push(65);
    s.push(6);

    solve(s);

    while (!(s.empty()))
    {
        /* code */
        cout<<s.top()<<endl;
        s.pop();
    }
}