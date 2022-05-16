#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *p = &a;
    cout << "Address : " << p << endl;
    cout << "value b4 : " << *p << endl;
    (*p)++;
    cout << a << endl;
    cout << *p << endl;

    // null pointer
    int *p2 = 0;
    cout << " : " << p2 << endl;
    //  cout<<"value :"<<*p2<<endl;....this line will led to segmentation fault(core dumped)
    int i = 6;
    p2 = &i;
    cout << "Address of i : " << p2 << endl;
    cout << "value :" << *p2 << endl;

    // copying of pointers
    int *q = p2;
    cout << "Address of i : " << q << endl;
    cout << "value :" << *q << endl;

    // pointers arithematic
    int *r = &i;
    cout << r + 1 << endl; // this will print the address of new location.
    (*r)++;
    cout << i << endl;

    // float f = 10.5;
    // float x = 2.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = x;
    // cout << *ptr<< " "<<f <<" " << x;
    int *ptr = 0;
    int x = 10;
    *ptr = x;
    cout << *ptr << endl;
}