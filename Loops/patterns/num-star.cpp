/*
    1234554321
    1234**4321
    123****321
    12******21
    1********1
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, n, num;
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        j=2;
        while (j<=i)
        {
                cout<<"*";
                j++;
        }
        

        j = 2;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        num = n - i + 1;
        while (num)
        {
            cout << num;
            num--;
        }

        cout << endl;
        i++;
    }
    return 0;
}