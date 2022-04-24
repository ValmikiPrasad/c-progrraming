// Q...In a given Matrix all the element in row are in sorted order and first 
// element of next row is greater than last element of previous row

#include <iostream>
using namespace std;

bool binary_search(int arr[][3],int key, int m){
    int s=0;
    int e=m*3 -1;
    int mid=(s+e)/2;
    while (s<=e)
    {
        /* code */
        int value=arr[mid/3][mid%3];
        if (value==key)
        {
            /* code */
            return true;
        }
        else if (key>value)
        {
            /* code */
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return false;

}

void print1(int arr[][3], int m)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "enter row column" << endl;
    cin >> m >> n;
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cin >> arr[i][j];
        }
    }
    print1(arr, 3);
    cout << endl;
    int key;
     cout<<"enter the key value :"<<endl;
    cin>>key;

    if (binary_search(arr,key,3))
    {
        /* code */
        cout<<"yes element is present"<<endl;

    }
    else{
         cout<<"No element is not present"<<endl;
    }
}

