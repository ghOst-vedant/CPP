/*  A 
    B A 
    C B A 
    D C B A 
*/
#include<iostream>
using namespace std;
int main() 
{
     int n, i = 1, j;
     char ch='A';
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout<<char('A'+ i - j )<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

return 0;
}