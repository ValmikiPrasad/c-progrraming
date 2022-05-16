// euclids algorithm
// gcd(a,b)=gcd(a-b,b);

#include<iostream>
#include<vector>
using namespace std;

int GCD(int a,int b){
    if (a==0)
    {
        /* code */
        return b;
    }
    if (b==0)
    {
        /* code */
        return b;
    }
    while (a!=b)
    {
        /* code */
        if (a>b)
        {
            /* code */
            a=a-b;
        }
        else
        {
            /* code */
            b=b-a;
        }
        
    }
    return b;
}
int main(){
    int a,b;
    cout<<"enter the number"<<endl;
    cin>>a>>b;
    cout<<"GCD of entered number is : "<<GCD(a,b)<<endl;
}