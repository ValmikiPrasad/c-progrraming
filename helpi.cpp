#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int answer=0;
    // int i=0;
    // while (n!=0)
    // {
    //     /* code */
    //     int bit=n&1;
    //     answer=bit*pow(10,i) +answer;
    //     i++;
    //     n=n>>1;
    // }
    // cout<<answer;
// bin--dec
    int n;
    cin>>n;
    int answer=0;
    int i=0;
    while (n!=0)
    {
        /* code */
       if (n&1)
       {
           /* code */
           answer=pow(2,i)+answer;
       }
       i++;
       n=n/10;

    }
    cout<<answer;
    
}