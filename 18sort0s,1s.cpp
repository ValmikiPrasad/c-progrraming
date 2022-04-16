#include<iostream>
using namespace std;
void print_array(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<arr[i]<<" " ;
        }
        cout<<endl;
}
void sort01(int arr[],int n){
        int left=0;
        int right=n-1;

        while (left<right)
        {
            /* code */
            if (arr[left]==0 && left<right)
            {
                /* code */
                left++;
            }
            else if (arr[right]==1 && left<right)
            {
                /* code */
                right--;
            }
            if (left<right)
            {
                /* code */
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
        }
        
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the element of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<"array before sorting"<<endl;
    print_array(arr,size);

    sort01(arr,size);

    cout<<"array before sorting"<<endl;
    print_array(arr,size);
}