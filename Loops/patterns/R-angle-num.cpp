#include<iostream>
using namespace std;
int main() 
{
   int n,i=1,j=1,c;
    cin>>n;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            cout<<c<<" ";
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
    

return 0;
}