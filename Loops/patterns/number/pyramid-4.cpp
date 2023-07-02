/*
 1234
  234
   34
    4
*/
#include<iostream>
using namespace std;
int main() 
{   
    int i=1,j,n,num;
    cin>>n;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            cout<<" ";
            j++;
        }
        num=i;
        while (num<=n)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
        i++;
        
    }
return 0;
}