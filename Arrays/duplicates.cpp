// duplicates  are printed  that are in th range [1,N-1]
#include<iostream>
using namespace std;
int duplicate(int arr[],int n){

    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans^=arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans=ans^i;
    }
    
   return ans; 
}
int main() 
{
    int arr[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<duplicate(arr,n);

return 0;
}