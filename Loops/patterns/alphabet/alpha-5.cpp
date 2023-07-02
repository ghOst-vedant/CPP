/*
    A 
    B C 
    C D E 
    D E F G
*/
#include<iostream>
using namespace std;
int main() 
{
    int n,i=1,j;
    char ch='A';
    cin>>n;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            cout<<char(ch+i+j-2);
            // ch++;/
            j++;
        }
        cout<<endl;
        i++;
    }
    
return 0;
}