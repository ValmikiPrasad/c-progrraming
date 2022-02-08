#include<iostream>
using namespace std;

int find_unique(int a[],int n){
    int x=a[0];
    for (int i = 1; i < n; i++)
    {
        /* code */
        x=x^a[i];
    }
    return x;
}
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        /* code */
        int size;
        cin>>size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            /* code */
            cin>>arr[i];
        }
        int result =find_unique(arr,size);
        cout<<"output"<<result<<endl;
    }
    
}