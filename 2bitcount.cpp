#include <iostream>
using namespace std;
int bitcount(int a){
     int count = 0;
    while (a != 0)
    {
     int bit = a & 1;
        if (bit == 1)
        {
            /* code */
            count++;
        }
        a = a >> 1;
    }
    return count;
}
int main()
{
    int a,b;
    cin >> a>>b;
   int bitA=bitcount(a);
   int bitB=bitcount(b);
   cout<<"total number of 1 bit = "<<bitA+bitB<<endl;
}