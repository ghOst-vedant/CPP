/*
A B C D
B C D E
C D E F
D E F G
*/
#include <iostream>
using namespace std;
int main()
{
    int n, row = 1, col;
    char ch = 'A';
    cin >> n;
    while (row <= n)
    {
        col = 1;
        char first = char('A' + row-1);
        while (col <= n)
        {
            cout << first << " ";
            first++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}