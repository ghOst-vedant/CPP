/*
 1111
  222
   33
    4
*/
#include<iostream>
using namespace std;
int main() 
{
    int i=1,j,n,star;
    cin>>n;
    while (i<=n)
    {
        j=1;
        star=n-i+1;
        while (j<=i)
        {
            cout<<" ";
            j++;
        }
        while(star)
        {
            cout<<i;
            star--;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
}