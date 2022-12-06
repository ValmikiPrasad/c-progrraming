#include<iostream>
using namespace std;

class twostack{

    private:

    int size;
    int *arr;
    int top1;
    int top2;

    public:

    // initialise two stack
    twostack(int size){
        this->size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }
    // pushing to stack 1
    void push1(int x){
        if (top2-top1>1)
        {
            /* code */
            top1++;
            arr[top1]=x;
        }
        
    }
    void pop1(){
        if (top1==-1)
        {
            /* code */
            cout<<"underflow "<<endl;
        }
        else{

            int ans=arr[top1];
            cout<<"popping element of stack1 is : "<<arr[ans];
            top1=top1-1;
            
        }
        
    }

    void push2(int x){
        if (top2-top1>1)
        {
            /* code */
            top2--;
            arr[top2]=x;
        }
        
    }
    int pop2(){
        if (top2==size)
        {
            /* code */
            cout<<"underflow "<<endl;
        }
        else{
            
            int ans=arr[top2];
            top2=top2+1;
            return ans;
        }
        
    }

};

