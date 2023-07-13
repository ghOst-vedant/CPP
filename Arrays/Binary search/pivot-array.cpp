#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
    
}
int main() 
{
    int arr[6]={4,5,6,1,2,3};
    cout<<"Index of pivot : "<<pivot(arr,6);

return 0;
}