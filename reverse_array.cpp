#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a = {1,2,3,4,5,6,7,8};
	for (int x : a)
	{
		cout << x << " ";
	}
	cout << endl;

	for (int i = a.size()-1 ; i >= 0 ; i--)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
