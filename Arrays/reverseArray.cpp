#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){

    int start=0;
    int end =n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
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
    reverseArray(arr,size);
    cout<<"Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}