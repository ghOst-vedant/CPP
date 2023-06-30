#include<iostream>
using namespace std;
int main() 
{
    float c,f;
    int ch;
    cin>>c>>f;
    cout<<"1) F->C\n2)C->F\n";
    cin>>ch;
    if(ch==1)
    {
        f = ((c*9)/5)+32;
        cout<<"F: "<<f;
    }
    else if(ch==2)
    {
        c=(f-32)*5/9;
        cout<<"C: "<<c;
    }
return 0;
}