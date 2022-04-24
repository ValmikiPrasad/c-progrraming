#include<iostream>
using namespace std;
void print_array(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" " ;
        }
        cout<<endl;
}
int add_Two_array(int arr1[],int m,int arr2[],int n,int arr3[]){

        int i=m-1;
        int j=n-1;
        int k=0;
        int carry=0;
        while (i>=0 && j>=0)
        {
            /* code */
            int sum=arr1[i]+arr2[j]+carry;
            int value=sum%10;
            carry=sum/10;
            arr3[k]=value;
            k++;
            i--;
            j--;
        }
        while (i>=0)
        {
            /* code */
            int sum=arr1[i]+carry;
            carry=sum/10;
            int value=sum%10;
            arr3[k]=value;
            k++;
            i--;
        }
        while (j>=0)
        {
            /* code */
              int sum=arr2[i]+carry;
            carry=sum/10;
            int value=sum%10;
            arr3[k]=value;
            k++;
            j--;
        }
        while (carry!=0)
        {
            /* code */
            arr3[k]=carry;
        }       
        return k; 
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

     int arr3[1000];
    int x=add_Two_array(arr1,size1,arr2,size2,arr3);
    print_array(arr3,x);
}