#include<iostream>
using namespace std;
int main() 
{
    int n, row = 1, col;
    char ch = 'A';
    cin >> n;
    while (row<=n)
    {
            col=1;
            while (col<=n)
            {
                cout<<char('A'+row+col-2)<<" ";
                col++;
            }
            cout<<endl;
            row++;
    }
    
return 0;
}