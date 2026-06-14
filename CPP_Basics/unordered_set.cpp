#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	unordered_set <int> a = { 1,1,1,2,3,4,5};
	a.insert(6);
	for (auto it : a)
	{
		cout << it << " ";
	}
	cout << endl;
	if (a.count(5))
	{
		cout << "5 exists" << endl;
	}
	return 0;
}
