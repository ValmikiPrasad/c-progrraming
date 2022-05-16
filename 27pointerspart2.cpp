// pointrs with array,functions
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sizeof(arr) << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << arr[0] << endl;
    cout << *arr << endl;
    cout << *&arr[0] << endl;

    cout << arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << arr[1] << endl;
    cout << 1 [arr] << endl; //****//
    cout << *&arr[1] << endl;

    //==>   arr[i]=*(arr+i) || i[arr]=*(i+arr);

    // difference between array and pointers
    // 1.
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    cout << sizeof(arr1) << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << *ptr << endl;
    // 2.

    //  arr1=arr1+1;.........this is not possible because name of the array is get mapped to a particular address which cannot be changed due to symbolic table;

    int *c = arr;
    c = c + 1; //...this will corresponds to address of index 1
    cout << c << endl;
    cout << *c << endl;

    // this is all about integer array , the game will be different in char array

    // cout implementation in character array is different

    char ch[8] = "valmiki";
    cout << ch << endl;

    char *a = &ch[0];
    cout << a << endl;//...Attention this line will print entire array
    cout << *a << endl;
    cout << *(a+1) << endl;
}