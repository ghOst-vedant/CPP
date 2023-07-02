/*
    1
   22
  333
 4444
*/
#include<iostream>
using namespace std;
int main() 
{
    int i=1,j,n,space;
    cin>>n;
    while (i<=n)
    {   
        space=n-i+1;
        j=1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        while (j<=i)
        {
            cout<<i;
            j++;
        }

        
        cout<<endl;
        i++;
    }
    
return 0;
}