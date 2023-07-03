#include<iostream>
using namespace std;
bool isPrime(int a){
    for (int i = 2; i < a; i++)
    {
        if ((a%i)==0)
        {   
                return false;
        }
        
    }
    return true;
    
}
int main() 
{
    int n;
    cin>>n;
    if (isPrime(n))
    {
        cout<<"Prime";
    }
    else{
        cout<<"Not prime.";
    }
    
return 0;
}