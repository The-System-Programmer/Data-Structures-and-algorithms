#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> arr = {1,2,3,4,5};
	int target = 6;

	int left = 0;
	int right = arr.size()-1;

	while (left<right)
	{
		int sum = arr[left]+arr[right];

		if (sum == target)
		{
			cout << arr[left]<<" "<<arr[right];
			break;
		}
		else if(sum < target)
		{
			left++;
		}
		else
		{
			right--;
		}
	}
	return 0;
}
