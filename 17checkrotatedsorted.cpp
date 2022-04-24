#include<iostream>
using namespace std;
void print_array(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" " ;
        }
        cout<<endl;
}
bool check_If_Rotataed(int arr[],int n){
    int count=0;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if (arr[i-1]>arr[i])
        {
            /* code */
            count++;
        }
        
    }
    if (arr[n-1]>arr[0])
    {
        /* code */
        count++;
    }
    if (count==1)
    {
        /* code */
        return true;
    }
    return false;
    
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
    bool x=check_If_Rotataed(arr,size);
    if (x)
    {
        /* code */
        cout<<"yes ,the array is sorted and rotated"<<endl;

    }
    else{
        cout<<"array is absssured"<<endl;
    }
    
}

