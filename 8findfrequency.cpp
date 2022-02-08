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

int first_occ(int a[],int n, int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while (start<=end)
        {
            /* code */
            if (a[mid]==key)
            {
                /* code */
                ans=mid;
                end=mid-1;
            }
            else if (key<a[mid])
            {
                /* code */
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=(start+mid)/2;

        } 
    return ans;
}



int last_occ(int a[],int n, int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while (start<=end)
        {
            /* code */
            if (a[mid]==key)
            {
                /* code */
                ans=mid;
                start=mid+1;
            }
            else if (key<a[mid])
            {
                /* code */
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=(start+mid)/2;

        } 
    return ans;
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
    //  cout<<"enter the key value :"<<endl;
    cin>>key;
    int index1=first_occ(arr,n,key);
    int index2 =last_occ(arr,n,key);
    cout<<index1<<" "<<index2<<endl;
}