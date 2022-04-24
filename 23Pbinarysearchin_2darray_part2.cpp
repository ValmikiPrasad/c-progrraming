// Q...The given Matrix all the elements are in sorted in row wise as well as colum wise, find the key
// 4 8 12
// 5 9 13
// 6 10 14
#include <iostream>
using namespace std;
bool find(int arr[][3], int key, int m)
{

    int row = 0;
    int col = 3 - 1;
    while (row < m && col >= 0)
    {
        /* code */
        int value = arr[row][col];
        if (value == key)
        {
            /* code */
            return true;
        }
        else if (key < value)
        {
            /* code */
            col--;
        }
        else
        {
            row++;
        }
    }
    return false;
}
void print1(int arr[][3], int m)
{
    cout<<endl;
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
    cout << "enter the key value :" << endl;
    cin >> key;
    if (find(arr, key, 3))
    {
        /* code */
        cout << "yes, element is present" << endl;
    }
    else
    {
        cout << "No ,element is not present" << endl;
    }
}
