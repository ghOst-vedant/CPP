#include<iostream>
using namespace std;
int main() 
{
    int a,b;
    char op;
    cin>>a>>b;
    cout<<"Enter the Option: + , - , / , * \n";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<(a+b);
        break;
    case '-':
        cout<<(a-b);
        break;
    case '/':
        cout<<(a/b);
        break;
    case '*':
        cout<<(a*b);
        break;
    }
return 0;
}