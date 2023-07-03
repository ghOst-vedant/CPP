#include<iostream>
using namespace std;
int main() 
{
    int a,b,n;
    cin>>n;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <= n; i++)
    {
        int Nn= a+b;
        cout<<Nn<<" ";
        a=b;
       b=Nn;
    }
return 0;
}