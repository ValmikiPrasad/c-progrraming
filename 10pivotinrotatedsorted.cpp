#include<iostream>
using namespace std;
void print_array(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" " ;
        }
        cout<<endl;
}
int pivotIndex(int arr[],int size){
        int s=0;
        int e=size-1;
        int mid=s+(e-s)/2;
        while (s<e)
        {
            /* code */
            if (arr[mid]>=arr[0])
            {
                /* code */
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
}
int main(){
    int size;
    cout<<"enter the size\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<"array : "<<endl;
    print_array(arr,size);
    cout<<"pivot index is at : "<<pivotIndex(arr,size)<<endl;
}