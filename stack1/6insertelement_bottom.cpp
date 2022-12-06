#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&stack,int x){

    if (stack.empty())
    {
        /* code */
        stack.push(x);
        return;
    }
    int num=stack.top();
    stack.pop();

    solve(stack,x);

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

    // while (!(s.empty()))
    // {
    //     /* code */
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }

    int x;
    cout<<"enter element to insert aat bottom : ";
    cin>>x;

    solve(s,x);

    while (!(s.empty()))
    {
        /* code */
        cout<<s.top()<<endl;
        s.pop();
    }

}