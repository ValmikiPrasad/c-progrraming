// NOTE : In the below implementation, maximum digits in the output are assumed as 500. To find a factorial of a much larger number ( > 254), increase the size of an array or increase the value of MAX.
#include<iostream>
using namespace std;
 
// Maximum number of digits in output
#define MAX 500
 int nat_sum(int x,int res[],int res_size){

        int carry=0;
        int base=res[0]+x;
        res[0]=base%10;
        carry=base/10;
        for (int i = 1; i < res_size; i++)
        {
            /* code */
            int prod=res[i]+carry;
            res[i]=prod%10;
            carry=prod/10;           
        }
        while (carry)
        {
            /* code */
            res[res_size]=carry%10;
            carry=carry/10;
            res_size++;
        }
        return res_size;
        
 }
 void sum(int n){
     int res[MAX];
     res[0]=0;
     int res_size=1;
     for (int x = 1; x<=n ; x++)
     {
         /* code */
        res_size= nat_sum(x,res,res_size);
     }
    for (int i = res_size-1; i >=0; i--)
    {
        /* code */
        cout<<res[i];
    }
    cout<<endl;
 }
 int main(){
     int n;
     cout<<"enter the limit : "<<endl;
     cin>>n;
     sum(n);
 }
