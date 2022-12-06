#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q1;
    q1.push(0);
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    
    // 0,1,2,3,4,5;----->0,3,1,4,2,5

    int x=q1.size()/2;

    queue<int>q2;
    while (x--)
    {
        /* code */
        q2.push(q1.front());
        q1.pop();
    }
    // q2--->q1;
    while (!(q2.empty()))
    {
        /* code */
        q1.push(q2.front());
        q2.pop();

        int data=q1.front();
        q1.push(data);
        q1.pop();
    }
    while (!(q1.empty()))
    {
        /* code */
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
}