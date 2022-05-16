#include<iostream>
using namespace std;
bool check_sorted(int *arr,int size){
    if (size==0 || size ==1)
    {
        /* code */
        return true;
    }
    if (arr[0]>arr[1])
    {
        /* code */
        return false;
    }
    else {
        bool ans=check_sorted(arr+1,size-1);
        return ans;
    }
}
int main(){
    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;
    int *arr=new int[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    if(check_sorted(arr,n)){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
}