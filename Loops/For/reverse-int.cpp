#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    int ans = 0;
    while (n)
    {
        int digit = n % 10;
        if (ans > INT32_MAX * 10 || ans < INT32_MIN * 10)
        {
            return 0;
        }
        ans = (ans * 10) + digit;

        n = n / 10;
        return ans;

    }
 
    return 0;
}