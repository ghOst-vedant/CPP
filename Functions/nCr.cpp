#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for (int i = 1; i <= a; i++)
    {
        fact*=i;
    }
    return fact; 
}
int nCr(int n ,int r){
    return ((factorial(n))/(factorial(r)*factorial(n-r)));
}
int main() 
{
    int a,b;
    cin>>a>>b;
    cout<<nCr(a,b);
return 0;
}