#include<iostream>
using namespace std;
bool check_palindrome(string str,int i,int j){
    if (i>=j)
    {
        /* code */
        return true;
    }
    if (str[i]!=str[j])
    {
        /* code */
        return false;
    }
    return check_palindrome(str,i+1, j-1);
}
int main(){
    string str;
    cout<<"enter the string : ";
    cin>>str;
    if(check_palindrome(str,0,str.length()-1)){
        cout<<"entered string is a palindrome"<<endl;
    }
    else{
        cout<<"entered string is not a palindrome"<<endl;
    }
}