#include<iostream>
using namespace std;
 int find_duplicate(int a[],int n){
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            ans=ans^a[i];
        }
        for (int i = 1; i < n; i++)
        {
            /* code */
            ans=ans^i;
        }
        
      return ans;  
 }
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        /* code */
        int size;
        cin>>size;
        int arr[size];
        for (int i = 0; i < size; i++){
            /* code */
            cin>>arr[i];
        }
         int result=find_duplicate(arr,size);
         cout<<result<<endl;
    }
   
}