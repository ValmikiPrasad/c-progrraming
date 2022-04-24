#include <iostream>
using namespace std;
void wave_print(int arr[][4], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        if (j & 1)
        {
            /* code */
            for (int i = row - 1; i >= 0; i--)
            {
                printf("%d ", arr[i][j]);
            }
            cout << ",";
        }
        else
        {
            for (int i = 0; i < row; i++)
            {
                printf("%d ", arr[i][j]);
            }
            cout << ",";
        }
    }
}
int max_row_sum(int arr[][4], int row, int col)
{

    int max = 0;
    int r = -1;
    int ans;
    for (int i = 0; i < row; i++)
    {
        /* code */
        ans = 0;
        for (int j = 0; j < col; j++)
        {
            /* code */
            ans += arr[i][j];
        }
        if (ans >= max)
        {
            max = ans;
            r = i;
        }
    }
    cout << r << endl;
    return max;
}
bool is_present(int arr[][4], int target, int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            if (arr[i][j] == target)
            {
                /* code */
                return 1;
            }
        }
    }

    return 0;
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
    int target;
    cout << "enter the key element" << endl;
    cin >> target;

    if (is_present(arr, target, 3, 4))
    {
        /* code */
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    cout << "row : " << max_row_sum(arr, 3, 4) << endl;
    wave_print(arr, 3, 4);
}
