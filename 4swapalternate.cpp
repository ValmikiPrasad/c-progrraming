#include<iostream>
using namespace std;
int v=0;
void swap_alternate(int a[],int size){
    for (int i = 0; i < size; i+=2)
    {
        /* code */
        if ((i+1)<size)
        {
            /* code */
            swap(a[i],a[i+1]);
        }
    }   
}
void print_array(int a[],int n){
    if (v==0)
    {
        /* code */
         int i=0;
        cout<<"your intial array is :"<<endl;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<a[i]<<" " ;
        }
        cout<<endl; 
    }
     v++;
     if (v==1)
     {
         /* code */
          int i=0;
        cout<<"your array after alternate swap is :"<<endl;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<a[i]<<" " ;
        }
        cout<<endl; 
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
    swap_alternate(arr,size);
       print_array(arr,size);
}