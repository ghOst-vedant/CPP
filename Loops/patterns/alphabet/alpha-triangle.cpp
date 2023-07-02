/*
    D 
    C D 
    B C D 
    A B C D 
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
        char first=char('A'+n- i);
        while (j <= i)
        {
            cout<<first<<" ";
            first++;
            j++;
        }
        cout<<endl;
        i++;
    }

return 0;
}