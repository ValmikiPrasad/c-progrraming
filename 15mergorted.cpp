#include<iostream>
using namespace std;
   void print_array(int a[],int n){
        cout<<"your array is "<<endl;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<a[i]<<" " ;
        }
        
    }
    void mergeing(int a1[],int n,int a2[],int m,int arr3[]){
            int i=0,j=0,k=0;
            while (i<n &&j<m)
            {
                /* code */
                if (a1[i]<a2[j])
                {
                    /* code */
                    arr3[k]=a1[i];
                    i++;
                    k++;

                }
                else{
                       arr3[k]=a2[j];
                    j++;
                    k++;
                }
            }
            while (i<n)
            {
                /* code */
                 arr3[k]=a1[i];
                    i++;
                    k++;
            }
            while (i<m)
            {
                /* code */
                 arr3[k]=a2[j];
                    j++;
                    k++;
            }
    }
int main(){
    int n,m;
    cin>>n>>m;

    int  arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr1[i];
    }
      for (int i = 0; i < m; i++)
    {
        /* code */
        cin>>arr2[i];
    }
    int arr3[n+m];
    mergeing(arr1,n,arr2,m,arr3);

}