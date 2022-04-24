// Q...rotate arrayby k position
#include<iostream>
using namespace std;
void print_array(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" " ;
        }
        cout<<endl;
}
void rotate_array(int arr[],int n,int k){

    // we will create new array temp,if do not create a new array then element will overwrite;
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        temp[(i+k)%n]=arr[i];
    }
    // Now copying element from temp to arr
    for (int i = 0; i < n; i++)
    {
        /* code */
        arr[i]=temp[i];
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

    int k;
    cout<<"enter the position upto u want to shift"<<endl;
    cin>>k;

    cout<<"Array after rotation :"<<endl;
    rotate_array(arr,size,k);
    print_array(arr,size);
}