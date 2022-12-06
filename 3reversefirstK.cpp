#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void solve(queue<int>&q,int k){
    int n=q.size();
    int x=n-k;
    stack<int> s;
    // q--->stack
    while (k--)
    {
        /* code */
        s.push(q.front());
        q.pop();
    }
    // stack-->q
    while (!(s.empty()))
    {
        /* code */
        q.push(s.top());
        s.pop();
    }
    // putting n-k element from front to last;
    while (x--)
    {
        /* code */
        int data=q.front();
        q.pop();
        q.push(data);
    }  

}
int main(){
    
    queue<int>q;
    q.push(0);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k;
    cout<<"enter the value of k : ";
    cin>>k;
    if (k>q.size())
    {
        /* code */
        cout<<"enter the value less than size of a queue :)"<<endl;
    }
    else{
        solve(q,k);
    }
    cout<<"after reversing first k element of queue :"<<endl;
    while (!(q.empty()))
    {
        /* code */
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}