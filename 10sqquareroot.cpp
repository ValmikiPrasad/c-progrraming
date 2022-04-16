#include<iostream>
using namespace std;

int integerPart(int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
      int square=mid*mid;
      if (square==n)
      {
          return mid;
      }
      else if (square>n)
      {
          e=mid-1;
      }
      else if (square<n)
      {
          /* code */
          ans=mid;
          s=mid+1;
      }
      mid=s+(e-s)/2;
    }
return ans;
}
double withPrecision(int n,int precision,int intPart){
    double factor=1;
    double ans=intPart;
    for (int i = 0; i < precision; i++)
    {
       factor=factor/10;
       for (double j = ans; j*j < n; j=j+factor)
       {
           ans=j;
       }
       
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the element\n";
    cin>>n;
    int x=integerPart(n);
    cout<<"integral part : "<<x<<endl;
    int precision;
    cout<<"enter the precision value"<<endl;
    cin>>precision;
    cout<<"root with precision : "<<withPrecision(n,precision,x)<<endl;
}
