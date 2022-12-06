#include<iostream>
using namespace std;

class stack
{
private:

    int *arr;
    int size;
    int top=-1;

public:
   stack(int size){
       this->size=size;
       arr=new int [size];
   }
   void push(int x){
       if (top==-1)
       {
           /* code */
           top++;
           arr[top]=x;

       }
       else if (top+1<size)
       {
           /* code */
            top++;
           arr[top]=x;
       }
       else{
           cout<<"stack overflow :)"<<endl;

       }
       
   }
   void pop(){
       if (top==-1)
       {
           /* code */
           cout<<"stack underflow"<<endl;

       }
       else{
           cout<<"element popping = "<<arr[top]<<endl;
           top=top-1;

       }
       
   }
   void peek(){
       if (top==-1)
       {
           /* code */
           cout<<"stack underflow"<<endl;
       }
       else{
           cout<<"top element of the stack is = "<<arr[top]<<endl;
       }
       
   }
   bool isEmpty(){
       if (top==-1)
       {
           /* code */
           return 1;
       }
       
   }

};



int main(){

    stack s1(4);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.peek();

    s1.pop();

    s1.peek();

    s1.push(5);

    s1.peek();
}