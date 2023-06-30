#include<iostream>
using namespace std;
int main() 
{
    int n,i=2,c=0;
    cin>>n;
    while (i!=n)
    {
        if ((n%i)==0)
        {
            cout<<"Not prime.";
            c++;
        }
        i++;
    }
    if (c==0)
    {
        cout<<"Prime.";
    }
    
    
return 0;
}