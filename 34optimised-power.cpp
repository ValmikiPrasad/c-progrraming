#include<iostream>
using namespace std;
int power(int a, int b){
    if (b==0)
    {
        /* code */
        return 1;
    }
    if (b==1)
    {
        /* code */
        return a;

    }
    int ans=power(a,b/2);
    if (b&1)
    {
        /* code */
        return a*ans*ans;
    }
    else{
        return ans*ans;
    }
}
int main(){
    int a,b;
    cout<<"enter base"<<endl;
    cin>>a;
    cout<<"enter the exponent : "<<endl;
    cin>>b;
    cout<<a<<"^"<<b<<"="<<power(a,b)<<endl;
}