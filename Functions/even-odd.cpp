#include<iostream>
using namespace std;
bool evenodd(int a){

    if ((a%2)==0)
    {
        return true;
    }
    return false;
}
int main() 
{
    int a;
    cin>>a;
    int res=evenodd(a);
    if (res)
    {
        cout<<"Even.";
    }
    else{
        cout<<"Odd.";
    }
    

return 0;
}