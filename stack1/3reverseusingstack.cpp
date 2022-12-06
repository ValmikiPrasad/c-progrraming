#include<iostream>
using namespace std;

class stack
{
private:
    
    char *arr;
    int size;
    int top=-1;

public:
    stack(int x){
        this->size=x;
        arr=new char[size];
    }
    void push(char a){
        if (top==-1)
        {
            /* code */
            top++;
            arr[top]=a;

        }
        else if (top+1<size)
        {
            /* code */
            top++;
            arr[top]=a;
        }
        
        
    }

    char peek(){
        return arr[top];
    }
    
    void pop(){
        if (top==-1)
        {
            /* code */
            return;
        }
        
        top--;
    }
    bool empty(){
        if (top==-1)
        {
            /* code */
            return 1;
        }
        return 0;
    }

};



int main(){

    string str="valmiki prasad";

    stack s1(str.length());
    for (int i = 0; i < str.length(); i++)
    {
        /* code */
        s1.push(str[i]);

    }
    string ans ="";
    while (!(s1.empty()))
    {
        /* code */
        ans.push_back(s1.peek());
        s1.pop();
    }
    cout<<ans<<endl;
   
    
}