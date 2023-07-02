/*
    1
   121
  12321
 1234321
*/
#include<iostream>
using namespace std;
int main() 
{
    int i=1,j,n,space=0;
    cin>>n;
    while (i<=n)
    {
        space=n-i+1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        j=1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        int right=i-1;
        while(right)
        {
            cout<<right;
            right--;
        }
        
        cout<<endl;
        i++;
    }
    
return 0;
}