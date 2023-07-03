#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++){
           int ans=pow(2,i);
            if(ans==n){
                return true;
            }
        }
        return false;
    }
int main() 
{ 
    int n;
    cin>>n;

    if (isPowerOfTwo(n))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
    // if (isPowerOfTwo == true)
    // {
    //     cout<<"true";
    // }
    
return 0;
}