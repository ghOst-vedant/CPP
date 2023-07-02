/*
1 
2 3 
4 5 6 
7 8 9 10 
*/
#include<iostream>
using namespace std;
int main() 
{
   int n,i=1,j=1,c;
    cin>>n;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            cout<<c<<" ";
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
    

return 0;
}