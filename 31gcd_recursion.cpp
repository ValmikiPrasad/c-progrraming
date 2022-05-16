#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    if (a == 0)
    {
        /* code */
        return b;
    }
   
    return GCD(b%a,a);
}
int main()
{
    int a, b;
    cin >> a;
    cin>>b;
    cout << "gcd of entered number is : " << GCD(a, b) << endl;
}