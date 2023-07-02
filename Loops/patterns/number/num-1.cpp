/*  1
    2 3
    3 4 5
    4 5 6 7*/
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, j, v;
    cin >> n;
    while (i <= n)
    {
        j = i;
        while (j < 2 * i)
        {
            cout << j<< " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}