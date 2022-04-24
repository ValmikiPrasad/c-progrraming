#include <iostream>
using namespace std;

void transpose(int arr[][3], int m)
{
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = i; j < 3; j++)
        {
            /* code */
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void swap_start_and_endCol(int arr[][3], int m){
    int starting_col = 0;
    int ending_col =m-1;
    for (int i = 0; i < m; i++)
    {
        /* code */
        swap(arr[i][starting_col], arr[i][ending_col]);
    }
    


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
    transpose(arr, 3);
    print1(arr, 3);
    cout << endl;

    swap_start_and_endCol(arr,3);
     print1(arr, 3);
    cout << endl;

}
