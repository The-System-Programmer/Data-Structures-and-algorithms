#include <iostream>
#include <vector>
using namespace std;

int search(const vector<int>& arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        // Left half is sorted
        if (arr[left] <= arr[mid])
        {
            if (target >= arr[left] && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        // Right half is sorted
        else
        {
            if (target > arr[mid] && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {5,6,7,1,2,3,4};
    cout << search(arr, 6) << endl; // Output: 1
    return 0;
}