#include<iostream>
using namespace std;
int main() 
{
    int n,i=1,c=1;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<c<<" ";
            c+=1;
            j+=1;
        }
        cout<<endl;
        i++;
    }
    
return 0;
}