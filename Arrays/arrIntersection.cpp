#include <iostream>
#include <vector>
using namespace std;
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            i++;
        } else if (nums1[i] > nums2[j]) {
            j++;
        } else {
            // Found a common element
            if (ans.empty() || ans.back() != nums1[i]) {
                ans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }

    return ans;
}
int main()
{
    vector<int> arr1, arr2;
    int n1, n2;
    cout << "Enter the size of array 1: ";
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int num;
        cin >> num;
        arr1.push_back(num);
    }
    cout << "Enter the size of array 2: ";
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int num;
        cin >> num;
        arr2.push_back(num);
    }
    vector<int> ans = intersection(arr1, arr2);
    int i = 0;
    while (ans[i])
    {
        cout << ans[i];
        i++;
    }

    return 0;
}