#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v = {34,23,53,23,45,64};
	int target = 53;
	for (int i = 0 ; i < v.size() ; i++)
	{
		if (v[i] == target)
		{
			cout<<"The target has been found in "<<i+1;
			break;
		}
	}
}
