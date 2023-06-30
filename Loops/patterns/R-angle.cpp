#include<iostream>
using namespace std;
int main() 
{
    int n,i=1;
    cin>>n;

    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<" "<<i;   /* cout<<"*"; To print the star pyramid */
            j++;
        }
        cout<<endl;
        i++;
    }
    
return 0;
}