#include <iostream>
using namespace std;
int fact(int n){
    if (n==0)
    {
        /* code */
        return 1;
    }
    int ans=n*fact(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    cout<<fact(n)<<endl;
}