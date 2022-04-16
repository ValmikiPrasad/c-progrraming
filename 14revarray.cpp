#include<iostream>
using namespace std;
int count=0;
void print_array(int a[],int n){
    if(count==0){
        cout<<"array before reverse is "<<endl;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<a[i]<<" " ;
        }
        cout<<endl;
        count++;
    }
     else{
          cout<<"array after reverse is "<<endl;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<a[i]<<" " ;
        }
        cout<<endl;
     }   
        
    }
    void reversing_array(int a[],int n){
 
        // cout<<"array after reverse is "<<endl;
        int s=0;
        int e=n-1;
        while (s<=e)
        {
            /* code */
            swap(a[s],a[e]);
            s++;
            e--;
        }
        
        
    }
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    print_array(a,n);
    reversing_array(a,n);
    print_array(a,n);

}