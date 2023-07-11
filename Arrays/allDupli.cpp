#include <iostream>
#include <vector>
using namespace std;
vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> duplis;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            duplis.push_back(nums[i]);
            i++;
        }
    }
    return duplis;
}
int main()
{
    vector<int> arr;
    int ar[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    vector<int> duplis = findDuplicates(arr);
    for (int num : duplis)
    {
        cout << num << " ";
    }
    return 0;
}