#include<iostream>
using namespace std;

int counting(int a[],int size){
    int count=0;
    for (int i = 0; i < size; i++)
    {
      
        if ((i+1)<size && (a[i]>a[i+1]))
        {
            count+=1;
        }
    }   
    return count;
}
void print_array(int a[],int n){
        int i=0;
        // cout<<"your array is "<<endl;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<a[i]<<" " ;
        }
        
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<"array :"<<endl;
    print_array(arr,n);
    cout<<endl;
    int x=counting( arr,n);
    cout<<x<<endl;
}