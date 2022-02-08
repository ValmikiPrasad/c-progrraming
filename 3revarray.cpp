#include<iostream>
using namespace std;
    void reverse_array(int a[],int n){
        int start=0;
        int end =n-1;
        while (start<=end)
        {
            /* code */
            swap(a[start],a[end]);
            start++;
            end--;
        }
        
    }
    void print_array(int a[],int n){
        int i=0;
        cout<<"your array is "<<endl;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<a[i]<<" " ;
        }
        
    }
int main(){
    int  arr[100];
    int size;
    printf("enter the size: \n");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    print_array(arr,size);
    reverse_array(arr,size);
      print_array(arr,size);
}