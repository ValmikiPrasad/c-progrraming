#include<iostream>
using namespace std;
#define MAX 500

int multiply(int x, int res[],int res_size){
    int carry=0;
    for (int i = 0; i < res_size; i++)
    {
        /* code */
        int prod=res[i]*x+carry;
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
void calculate_power(int base,int exp){
    int res[MAX];
    res[0]=1;
    int res_size=1;
    for (int x = base; exp>0; exp--)
    {
        /* code */
        res_size=multiply(x,res,res_size);
    }
    for (int i = res_size-1; i >=0; i--)
    {
        /* code */
        cout<<res[i];
    }
    cout<<endl;
    
}
int main(){
    int base;
    cout<<"enter base : "<<endl;
    cin>>base;
    int exp;
    cout<<"enter the exponent : "<<endl;
    cin>>exp;
    calculate_power(base,exp);
}