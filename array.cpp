#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> a)
{
	for (int x : a)
	{
		cout << x << " ";
	}
}

int main()
{
	vector<int> a = {1,2,3,4,5};
	display(a);
	return 0;
}
