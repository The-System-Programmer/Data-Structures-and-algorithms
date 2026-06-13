#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> &a , vector<int> &b)
{
	int i = 0 , j = 0;
	vector<int> result;
	while(i<a.size() && j<b.size())
	{
		if(a[i]>=b[j])
		{
			result.push_back(b[j++]);
		}
		else
		{
			result.push_back(a[i++]);
		}
	}
	while (i<a.size())
	{
		result.push_back(a[i++]);
	}
	while (j<b.size())
	{
		result.push_back(b[j++]);
	}
	return result;
}
int main()
{
	vector<int> a = {1,2,3,4,5};
	vector<int> b = {6,7,8,9,10};
	vector<int> result = merge(a,b);
	for (int x : result)
	{
		cout << x << " ";
	}
	return 0;
}
