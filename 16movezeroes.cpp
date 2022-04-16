#include<iostream>
using namespace std;
void print_array(int a[],int n){
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<a[i]<<" " ;
        }
        cout<<endl;
}
void move_zeroes(int arr[],int size){
    int z=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]!=0)
        {
            swap(arr[z],arr[i]);
            z++;
        }
        
    }
    
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    print_array(a,n);
    move_zeroes(a,n);
     print_array(a,n);
}