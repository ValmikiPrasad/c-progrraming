#include<iostream>
#include<queue>
#include<stack>

using namespace std;
int main(){
    queue<int>q;
    q.push(0);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int x=q.size()/2;

    stack<int> s;
    while (x--)
    {
        /* code */
        s.push(q.front());
        q.pop();

    }
    // stack--->queue
    while (!(s.empty()))
    {
        /* code */
        q.push(s.top());
        s.pop();

    }
    // moving front part to back
    int y=q.size()/2;
    while (y--)
    {
        /* code */
        int data=q.front();
        q.push(data);
        q.pop();
    }
    // queue--->stack
    int z=q.size()/2;
     while (z--)
    {
        /* code */
        s.push(q.front());
        q.pop();

    }

    // stack--->queue....and q front to q back accordingly
    while (!(s.empty()))
    {
        /* code */
        q.push(s.top());
        s.pop();
        int data=q.front();
        q.push(data);
        q.pop();

    }
    
    while (!(q.empty()))
    {
        /* code */
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}