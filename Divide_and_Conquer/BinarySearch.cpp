#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> & arr , int target)
{
    int low = 0 , high = arr.size() - 1;
    while(low<= high)
    {
        int mid = low + (high-low)/2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid]<target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int LowerBound(vector<int> &arr , int target)
{
    int low = 0 , high = arr.size();
    while (low < high)
    {
        int mid = low + (high-low)/2;
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int UpperBound(vector<int> &arr , int target)
{
    int low = 0, high = arr.size(); // FIXED
    while(low < high)
    {
        int mid = low + (high-low)/2;
        if (arr[mid] <= target)
            low = mid + 1;
        else
            high = mid;
    }
    return low; 
}

int main()
{
    vector<int> arr = {1,2,3,3,3,4,5,6,7};
    cout << "Binary search to find 3 is "<< BinarySearch(arr,3) << endl;
    cout << "Lower bound to find 3 is " << LowerBound(arr,3) << endl;
    cout << "Lower bound to find 3 is " << UpperBound(arr,3) << endl;
    return 0;
}