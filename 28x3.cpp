// print the natural number

#include<iostream>
using namespace std;
void print1(int n){
    if (n==0)
    {
        /* code */
        return;
    }
    cout<<n<<" ";
    print1(n-1);
}
void print2(int n){
    if (n==0)
    {
        /* code */
        return;
    }
    print2(n-1);
    cout<<n<<" ";
    
}
int main(){
    int n;
    cout<<"enter the limit : "<<endl;
    cin>>n;
    print1(n);
    cout<<endl;
    print2(n);

}