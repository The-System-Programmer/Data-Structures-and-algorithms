#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> & a,int left,int mid,int right)
{
	vector <int> temp ;
	int i = left;
	int j = mid+1;

	while(i<=mid && j <= right)
	{
		if(a[i] <= a[j])
		{
			temp.push_back(a[i]);
			i++;
		}
		else
		{
			temp.push_back(a[j]);
			j++;
		}
	}
	while (i<=mid)
	{
		temp.push_back(a[i]);
		i++;
	}
	while (j<= right)
	{
		temp.push_back(a[j]);
		j++;
	}

	for (int k=0;k<temp.size();k++)
	{
		a[left+k] = temp[k];
	}
}
void mergeSort(vector <int> & a,int left,int right)
{
	if(left>=right)
		return;
	int mid = left+(right-left)/2;
	mergeSort(a,left,mid);
	mergeSort(a,mid+1,right);
	merge(a,left,mid,right);
}
int main()
{
    vector <int> a = {4 , 2 , 5 , 1 , 3};
    mergeSort(a,0,a.size()-1);
    cout << "Sorted arra : ";
    for (int num : a)
    {
    	cout << num << " ";
    }
    cout << endl;
    return 0;
}
