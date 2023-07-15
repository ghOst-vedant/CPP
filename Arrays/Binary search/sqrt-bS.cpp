#include <iostream>
using namespace std;
long long int bSroot(int x)
{
    int s = 0;
    int e = x;
    int ans = -1;
    long long int mid = (s + e) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == x)
        {
            return mid;
        }
        else if (square < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

double morePrecise(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int a = 64;
    int temp = bSroot(69);
    cout << morePrecise(69, 3, temp);
    return 0;
}