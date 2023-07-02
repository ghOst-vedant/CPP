/*
        *
      * *
    * * *
  * * * *  
*/
#include<iostream>
using namespace std;
int main() 
{
    int space,i,j,n;
    cin>>n;
    while (i<=n)
    {
        space=n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        j=1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
return 0;
}