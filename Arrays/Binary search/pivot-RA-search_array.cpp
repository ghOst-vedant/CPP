#include <iostream>
using namespace std;
// the Binary Search function
int binarySearch(int arr[], int s,int e, int key)
{
    int low = s;
    int high = e;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}
// gettitng the pivot 
int getpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}
// search in Rotated array
int search(int arr[],int target,int n){
    int pivot=getpivot(arr,n);
    if (target>=arr[pivot] && target <=arr[n-1])
    {
        return binarySearch(arr,pivot,n-1,target);
    }
    else{
        return binarySearch(arr,0,pivot-1,target);
    }
    
}
int main()
{
    int arr[6] = {4, 5, 6, 1, 2, 3};
    int x= 2;
    cout << "element is at : " << search(arr,x,6);

    return 0;
} 