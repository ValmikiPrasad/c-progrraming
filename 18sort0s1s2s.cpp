
// DNF--DUTCH NATIONAL FLAG ALGORITHMS 
// we can sort array of 3 element 
#include<iostream>
using namespace std;
void print_array(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<arr[i]<<" " ;
        }
        cout<<endl;
}
void sort01(int arr[],int n){
       int low=0;
       int mid=0;
       int high=n-1;

    //    NOW WE WILL TRY TO DECREASE THE UNKNOWN REGION---
       while (mid<=high)
       {
           /* code */
           switch (arr[mid])
           {
           case 0:
               swap(arr[low],arr[mid]);
               low++;
               mid++;
               break;
            case 1:
                mid++;
               break;       
            case 2:
               swap(arr[mid],arr[high]);
               high--;
               break;
           }
       }    
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the element of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<"array before sorting"<<endl;
    print_array(arr,size);

    sort01(arr,size);

    cout<<"array before sorting"<<endl;
    print_array(arr,size);
}