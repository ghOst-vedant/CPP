/*
****
***
**
*
*/
#include<iostream>
using namespace std;
int main() 
{
    int i=1,n,j,star;
    cin>>n;
    while (i<=n)
    {
        star=n-i+1;
        while (star)
        {
            cout<<"*";
            star--;
        }
        cout<<endl;
        i++;
    }
    
return 0;
}