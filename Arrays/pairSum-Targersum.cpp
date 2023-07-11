#include<iostream>
using namespace std;
vector<int> twoSum(vector<int> arr,int target)
{
    
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if ((arr[i]+arr[j])==target)
            {
                return {i,j};
            }
        }
    }
    return {};
}
int main() 
{
    vector<int> arr1;
    int n1,x;
    cout << "Enter the size of array 1: ";
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int num;
        cin >> num;
        arr1.push_back(num);
    }
    cout<<"Enter the target sum: ";
    cin>>x;
    vector<int> ans=twoSum(arr1,x);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    
return 0;
}