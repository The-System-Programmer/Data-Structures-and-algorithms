#include <iostream>
#include <vector>

using namespace std;

int merge(vector <int> & arr , int target , int left , int right)
{
	if(left>right)
		return -1;
	int mid = left + (right-left)/2;
	if (arr[mid] == target)
		return mid;
	if (arr[mid] > target)
		return (arr,target,left,mid-1);
	return (arr,target,mid-1,right);
}
int main()
{
	vector <int> arr = {1,2,3,4,5,6,7};
	int target = 2;
	cout<<merge(arr,target,0,arr.size()) << endl;
	return 0;
}
