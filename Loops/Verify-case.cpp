#include<iostream>
using namespace std;
int main() 
{
    char c;
    cout<<"Enter the character: ";
    cin>>c;
    if (c>='A' && c<='Z')
    {
        cout<<"Uppercase.";
    }
    else if (c>='a'&& c<='z')
    {
        cout<<"Lowercase.";   
    }
    else if(c >= 48 && c <= 57)
    {
        cout<<"Number";
    }
    return 0;
}