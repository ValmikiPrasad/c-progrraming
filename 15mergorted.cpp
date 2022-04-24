// Q...merge two sorted array

#include<iostream>
using namespace std;
void print_array(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" " ;
        }
        cout<<endl;
}

void mergedarray(int arr1[],int m,int arr2[],int n,int arr3[],int k){

    int i=0;
    int j=0;
     k=0;
    while (i<m && j<n)
    {
        if (arr1[i]<=arr2[j])
        {
            /* code */
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else if (arr2[j]<=arr1[i])
        {
            /* code */
            arr3[k]=arr2[j];
            k++;
            j++;
        }   
    }
    while (i<m)
    {
        /* code */
        arr3[k]=arr1[i];
            k++;
            i++;
    }
    while (j<n)
    {
        /* code */
        arr3[k]=arr2[j];
            k++;
            j++;
    }
}
int main(){
    int size1;
    cout<<"enter the size\n";
    cin>>size1;
    int arr1[size1];
    cout<<"Enter the element of array"<<endl;
    for (int i = 0; i < size1; i++)
    {
        /* code */
        cin>>arr1[i];
    }
    cout<<"array : "<<endl;
    print_array(arr1,size1);

    int size2;
    cout<<"enter the size\n";
    cin>>size2;
    int arr2[size2];
    cout<<"Enter the element of array"<<endl;
    for (int i = 0; i < size2; i++)
    {
        /* code */
        cin>>arr2[i];
    }
    cout<<"array : "<<endl;
    print_array(arr2,size2);

    int k=size1+size2;
    int arr3[k];
    mergedarray(arr1,size1,arr2,size2,arr3,k);
     print_array(arr3,k);
}