#include <iostream>
using namespace std;
int get_sum(int *a,int size){
    int sum =0;
    for (int i = 0; i < size; i++)
    {
        /* code */
        // sum=sum+*(a+i);
        sum=sum+a[i];
        // sum=sum+i[a];
    }
    return sum;
}
int main(){

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<get_sum(arr,10)<<endl;
    cout<<get_sum(arr+3,7)<<endl;
}