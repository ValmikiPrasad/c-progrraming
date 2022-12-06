#include<iostream>
using namespace std;
void update(int &n){
    n++;
}

int main(){
    int a=5;
    update(a);
    cout<<a<<endl;

    
}