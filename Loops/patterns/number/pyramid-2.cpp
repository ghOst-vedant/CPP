/*
1111 
222  
33   
4    
v
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
        while(star){
            cout<<i;
            star--;
        }
        while (j<=i)
        {
            cout<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
return 0;
}