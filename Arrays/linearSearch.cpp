#include<iostream>
using namespace std;
int lSearch(int arr[],int n,int x){
    for (int i = 0; i < n ; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
    }
    return 0;
}
int main() 
{
     int arr[100];
    int size,x;   
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the numer to be searched: ";
    cin>>x;
    bool res=lSearch(arr,size,x);
    if (res)
    {
        cout<<"Fount at "<<res;
    }
    else
    {
        cout<<"Not available.";
    }
return 0;
}