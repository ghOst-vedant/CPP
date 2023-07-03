#include<iostream>
using namespace std;
int setbits(int a,int b){
    int count=0;
    while (a || b)
    {
        count+= a&1;
        a=a>>1;
        count+= b&1;
        b=b>>1;
    }
    return count;
    
}
int main() 
{
    int a,b;
    cin>>a>>b;
    cout<<setbits(a,b);
return 0;
}