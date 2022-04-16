#include<iostream>
using namespace std; 
int main(){
    int a;
    cin>>a;
    while (a--)
    {
        int n;
    cin>>n;
    if (n<6)
    {
        /* code */
        cout<<0<<endl;

    }
    else if (n>=6)
    {
        /* code */
        int week=n/7;
        int days=n%7;
        if (days==0 || days<6)
        {
            /* code */
            cout<<week<<endl;
        }
        else if (days==6)
        {
            /* code */
            cout<<week+1<<endl;

        }
        
        
    }
    }
}