#include<iostream>
using namespace std;
int main() 
{
   int n,i=1,j;
   cin>>n;
   while (i<=n)
   {
        j=1;
        while (j<=i)
        {
            cout<<char('A'+i-1);
            j++;
        }
        cout<<endl;
        i++;
   }
    
return 0;
}