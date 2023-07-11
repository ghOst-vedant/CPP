#include <iostream>
using namespace std;
int unique(int arr[],int n)
{
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    for (int i = 0; i < n; i++)
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
    cout<<"Unique: "<<unique(arr,n);

    return 0;
}