#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&stack , int count ,int size){

    if (count==size/2)
    {
        /* code */
        stack.pop();
        return;

    }
    int num =stack.top();
    stack.pop();

    solve(stack,count+1,size);
    stack.push(num);

    
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    int count=0;

    solve(s,count,s.size());
    while (!(s.empty()))
    {
        /* code */
        cout<<s.top()<<endl;
        s.pop();
    }
    
}