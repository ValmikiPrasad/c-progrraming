// fibbonacci using recursion
#include<iostream>
using namespace std;
// say digit
void say_digit(string str[],int n){

        if (n==0)
        {
            /* code */
            return;
        }
        int digit=n%10;
        n=n/10;
        say_digit(str, n);
        cout<<str[digit]<<" ";
}
int fibb(int n){
    if (n==0)
    {
        /* code */
        return 0;
    }
    if (n==1)
    {
        /* code */
        return 1;
    }
    int ans=fibb(n-1)+fibb(n-2);
    return ans;
    
}
int main(){
    int n;
    cout<<"entered the number : ";
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"you entered : ";
    say_digit(arr,n);
    cout<<endl;
    cout<<"valmiki ,";
    cout<< "fibbonaccci of entered number : "<<fibb(n)<<endl;
}

