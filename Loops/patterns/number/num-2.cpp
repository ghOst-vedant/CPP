/*
    1
    2 1
    3 2 1
    4 3 2 1
*/

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j;
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout<<(i-j+1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}