// Sieve of Eratosthenes...O(n+log(n))
// Given a number n, print all primes smaller than or equal to n. It is also given that n is a small number. 
#include<iostream>
#include<vector>
using namespace std;
int count_prime(int n){
    int count =0;
    vector<int> prime(n+1,true);
    prime[0]=prime[1]=0;
    for (int i = 2; i < n; i++)
    {
        /* code */

        if (prime[i])
        {
            cout<<i<<endl;
            /* code */
            count++;
            for (int j = 2*i; j < n; j=j+i)
            {
                /* code */
                prime[j]=0;
            }
            
        }
        

    }
    return count;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<count_prime(n);

}

// vector<int> prime(n+1,true);
//     prime[0]=prime[1]=0;
//     for (int i = 2; i < n; i++)
//     {
//         /* code */
//           bool x=prime[i]
        
//         if (x)
//         {
//             /* code */
//             count++;
//             for (int j=2; j*i < n; j++)
//             {
//                 /* code */
//                 prime[j*i]=0;
//             }
            
//         }
        

//     }
//     return count;