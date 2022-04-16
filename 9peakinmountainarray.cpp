// Q...find the peak element in a given mountain array---

#include<iostream>
using namespace std;
void print_array(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" " ;
        }
        cout<<endl;
}
int peakelementIndex(int arr[],int size){
    int start=0;
    int end=size-1;
   int mid=start+(end-start)/2;
    while (start<end)
    {
        /* code */
         if (arr[mid]<arr[mid + 1])
            {
               start=mid+1;
            }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    } 
    return start;
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
    cout<<"peakelement is at index : "<<endl;
    int n=peakelementIndex(arr,size);
    cout<<n<<endl;
}