
#include <bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;
int firsOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int mid = s + ((e - s) / 2);
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int mid = s + ((e - s) / 2);
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + ((e - s) / 2);
    }
    return ans;
}
// pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
// {
//     // Write your code here
//     pair<int, int> p;
//     p.first = firsOcc(arr, n, k);
//     p.second = lastOcc(arr, n, k);
//     return p;
// }

int main() 
{
    int ans;
    int arr[17]={1,2,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4,};

    cout<<lastOcc(arr,17,4)-firsOcc(arr,17,4)+1;
return 0;
}