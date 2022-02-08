#include<iostream>
using namespace std;

int binarysearch(int n){
        int s=0;
        int e=n;
        int mid=s+(e-s)/2;
       
        int ans=-1;
        
        while(s<=e){
            int square=mid*mid;
            if(square==n){
                return mid;
            }
            if(square<n){
                ans=mid;
                s=mid+1;
            }
            else{
               e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }

double precized(int n,int precesion,int int_part){
    double factor=1;
    double ans=int_part;
    for (int i = 0; i < precesion; i++)
    {
        /* code */
        factor=factor/10;

        for (double j = ans; j*j < n; j=j+factor)
        {
            /* code */
            ans=j;
        }
        
    }
    return ans;
}
int main(){
    int n;
    cout<<" the number : "<<endl;
    cin>>n;
    int int_part=binarysearch(n);
    cout<<int_part<<endl;
    int x;
    cout<<"enter precision"<<endl;
    cin>>x;
    double moreprecized=precized(n,x,int_part);
    cout<<"with precision : "<<moreprecized<<endl;
    
}