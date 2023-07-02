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
        while(star){
            cout<<"*";
            star--;
        }
        cout<<endl;
        i++;
        
}
    
return 0;
}