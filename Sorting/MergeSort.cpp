#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr,int left,int mid,int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;

	vector<int> L(n1),R(n2);
	for (int i = 0 ; i < n1 ; i++)
		L[i] = arr[left+i];
	for (int j = 0 ; j < n2 ; j++)
		R[j] = arr[mid+1+j];
	
	int i = 0 , j = 0;
	int k = left;
	while(i<n1&&j<n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] == L[i];
			i++;
		}
	}
}

void split(vector<int> &arr,int left , int right)
{
	if (left < right)
	{
		int mid = left+(right-left)/2;
		split(arr,left,mid);
		split(arr,mid+1,right);
		merge(arr,left,mid,right);
	}
}
int main()
{
	vector<int> arr = {2,1,5,4,6,3,9};
	split(arr,0,arr.size()-1);
	return 0;
}
