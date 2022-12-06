#include<iostream>
#include<stack>

#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(0);
    cout<<"front of original q : "<<q.front()<<endl;
    cout<<"back of original q : "<<q.back()<<endl;

    // reversing the q;
    stack<int> s;
    while (!(q.empty()))
    {
        /* code */
        s.push(q.front());
        q.pop();
    }
    // stack ---->queue
    while (!(s.empty()))
    {
        /* code */
        q.push(s.top());
        s.pop();
    }
    cout<<"q after reversing :"<<endl;
    while (!(q.empty()))
    {
        /* code */
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    


}