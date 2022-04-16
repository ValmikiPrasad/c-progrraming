#include<iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    while (n--)
    {
         int a,b;
    cin>>a>>b;
    int p1=2*b;
    if (a<p1)
    {
        cout<<0<<endl;

    }
    else{
        cout<<a/p1<<endl;
    }
    }
}