#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int find_celebrity(vector<vector<int>> M,int n){
    stack<int> s;
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        s.push(i);
    }
    while (s.size()!=1)
    {
        /* code */
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();

        if (M[a][b]==1)
        {
            /* code */
            s.push(b);
        }
        else{
            s.push(a);
        }
        
    }
    int valid=s.top();
    // return valid;
    int rowcheck=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (M[valid][i]==0)
        {
            /* code */
            rowcheck++;
        }
        
    }

    int colcheck=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (M[i][valid]==1)
        {
            /* code */
            colcheck++;
        }
        
    }
    if (rowcheck==n && colcheck==n-1)
    {
        /* code */
        return valid;
    }
    return -1;
    

    
    
}
int main(){
    vector<vector<int>> M={{0,1,0},
                            {0,0,0},
                            {0,1,0}};

    int n=M.size();
    int cele=find_celebrity(M,n);
    cout<<cele<<endl;
    
}