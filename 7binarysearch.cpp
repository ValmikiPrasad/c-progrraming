#include<iostream>
using namespace std;
 void print_array(int a[],int n){
        int i=0;
        // cout<<"your array is "<<endl;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<a[i]<<" " ;
        }
        
    }
  int binary_search(int a[],int n,int key){
        int start=0;
        int end=n-1;
        int mid=(start+end)/2;
        while (start<=end)
        {
            if (a[mid]==key)
            {
                return mid;
            }
            else if (key<a[mid])
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=(start+mid)/2;

        }       
        return -1;
  }  
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<"array :"<<endl;
    print_array(arr,n);
    int key;
     cout<<"enter the key value :"<<endl;
    cin>>key;
   
    int index=binary_search(arr,n,key);
    if (index==-1)
    {
        /* code */
        cout<<"key not found :)"<<endl;
    }
    else{
        cout<<"key value is present at index : "<<index<<endl;
    }
    
}