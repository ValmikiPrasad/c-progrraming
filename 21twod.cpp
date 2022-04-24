#include<iostream>
using namespace std;
 
void print(int arr[][4], int m)
{
    int i, j;
    for (i = 0; i < m; i++)
      for (j = 0; j < 4; j++)
        printf("%d ", arr[i][j]);
}
 
int main()
{
    // int m,n;
    // cout<<"enter row column"<<endl;
    // cin>>m>>n;
    int m,n;
    cin>>m>>n;
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 4; j++)
        {
            /* code */
            cin>>arr[i][j];
        }
        
    }
    print(arr, 3);
    return 0;
}