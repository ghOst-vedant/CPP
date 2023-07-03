#include <iostream>
using namespace std;
int minMax(int arr[], int size)
{
    int min, max;
    min = max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Min: " << min;
    cout << "\nMax: " << max;
}
int main()
{
    int arr[100];
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    minMax(arr, size);
    return 0;
}