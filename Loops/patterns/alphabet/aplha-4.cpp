/*
    A 
    B C 
    D E F 
*/
#include<iostream>
using namespace std;
int main() 
{
   int n,i=1,j;
   char ch ='A';
   cin>>n;
   while (i<=n)
   {
        j=1;
        while (j<=i)
        {
            cout<<char(ch)<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
   }
return 0;
}