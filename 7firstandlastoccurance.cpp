// Q...to find first and last occurance of element in a given sorted array---

#include<iostream>
using namespace std;
void print_array(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" " ;
        }
        cout<<endl;
}
int leftoccurance(int arr[],int size,int key){
        int s=0;
        int e=size-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while (s<=e)
        {
            /* code */
            if (arr[mid]==key)
            {
                /* code */
                ans=mid;
                e=mid-1;
            }
            else if (arr[mid]>key)
            {
                /* code */
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
}
int rightoccurance(int arr[],int size,int key){
        int s=0;
        int e=size-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while (s<=e)
        {
            /* code */
            if (arr[mid]==key)
            {
                /* code */
                ans=mid;
                s=mid+1;
            }
            else if (arr[mid]>key)
            {
                /* code */
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
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
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<"leftmostoccurance of the key element is at index : "<<leftoccurance(arr,size,key)<<endl;
    cout<<"rightmostoccurance of the key element is at index : "<<rightoccurance(arr,size,key)<<endl;


}