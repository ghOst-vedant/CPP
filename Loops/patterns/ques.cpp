#include<iostream>
using namespace std;
int simpleArraySum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}
int main() 
{
    int n;
    int arr[1000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int result =simpleArraySum(arr,n);
    cout<<result;
    
return 0;
}