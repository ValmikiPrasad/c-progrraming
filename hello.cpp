
    #include <iostream>
using namespace std;
int main() {
    void * ptr;
    int i = 10;
    // assign int address to void
    ptr = & i;
    cout << "Address of variable i " << & i << endl;
    cout << "Address where the void pointer is pointing " << ptr <<  endl;
    // cout<<*ptr<<endl;...note void pointers cannot be dereferenced
    return 0;
}

