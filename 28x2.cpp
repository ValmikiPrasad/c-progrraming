// sum of natural number
#include<iostream>
using namespace std;
int natural_sum(int x){
    if (x==1)
    {
        /* code */
        return 1;
    }
    int ans=x+natural_sum(x-1);
    return ans;
    
}
int main(){
    int n;
    cout<<"enter the limit : "<<endl;
    cin>>n;
    cout<<natural_sum(n)<<endl;
}