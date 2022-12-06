#include<iostream>

#include<queue>
using namespace std;
void solve(queue<int>&q){
    if (q.empty())
    {
        /* code */
        return;
    }
    else{
        int data=q.front();
        q.pop();

        solve(q);

       q.push(data);
    }
    
}
int main(){
     queue<int>q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(0);

    solve(q);

    cout<<"q after reversing :"<<endl;
    while (!(q.empty()))
    {
        /* code */
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}