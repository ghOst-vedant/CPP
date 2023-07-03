#include <iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
    int count = 0;
    while(n)
    {

        count+= n&1;
        n=n>>1;
    }
    if (count==1)
    {
        return true;
    }
    return false;
    
}
int main()
{
    int n;
    cin >> n;

    if (isPowerOfTwo(n)==true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}