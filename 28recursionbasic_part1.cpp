// 1...calculate power of 2 using recursion

#include <iostream>
using namespace std;
int calculate_power(int n){
    if (n==0)
    {
        /* code */
        return 1;
    }
    int ans=2*calculate_power(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"enter the exponent : "<<endl;
    cin>>n;
    cout<<calculate_power(n)<<endl;
}