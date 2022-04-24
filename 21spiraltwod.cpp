#include <iostream>
using namespace std;

void print_sprial(int arr[][4], int m, int n)
{
    int starting_row = 0;
    int starting_col = 0;
    int ending_row = m-1 ;
    int ending_col = n -1;
    int count = 0;
    int total = m * n;
    cout<<"{";
    while (count < total)
    {
        
        for (int j = starting_col; j <= ending_col && count < total; j++)
        {
            cout << arr[starting_row][j]<<" ";
            count++;
        }
        
        starting_row++;


        for (int j = starting_row; j <= ending_row && count < total; j++)
        {
            cout << arr[j][ending_col]<<" ";
            count++;
        }
        
        ending_col--;
        
        
        for (int j = ending_col; j>=starting_col && count < total; j--)
        {
            cout << arr[ending_row][j]<<" ";
            count++;
        }
        
        ending_row--;

        
        for (int  j = ending_row; j>=starting_row && count < total; j--)
        {
            cout << arr[j][starting_col]<<" ";
            count++;
        }
        
        starting_col++;
    }
    cout<<"}";
}

void print1(int arr[][4], int m)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < 4; j++)
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
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            cin >> arr[i][j];
        }
    }
    print1(arr, 3);
    cout<<endl;
    print_sprial(arr, 3, 4);
}
