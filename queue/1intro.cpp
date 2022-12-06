#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(5);
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.push(4);
    q.push(6);
    q.push(1);
    q.push(8);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;

    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    while (!(q.empty()))
    {
        /* code */
        cout<<q.front()<<" ";
        q.pop();
    }
    

}