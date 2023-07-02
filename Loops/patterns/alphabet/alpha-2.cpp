/*  A B C D 
    A B C D 
    A B C D 
    A B C D
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
        while (col <= n)
        {
            cout << char(ch + col - 1) << " ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}