// Q...Move zeroes to right

#include<iostream>
using namespace std;
void print_array(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" " ;
        }
        cout<<endl;
}
void move_zeroes(int arr[],int n){
    int i=0;
    for (int j = 0; j < n; j++)
    {
        /* code */
        if (arr[j]!=0)
        {
            /* code */
            swap(arr[i],arr[j]);
            i++;
        }
        
    }
    
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
    move_zeroes(arr,size);
    cout<<"After moving zeroes to right : "<<endl;
    print_array(arr,size);
}
