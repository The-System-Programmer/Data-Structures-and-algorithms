#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> dup(vector<int> & arr)
{
	stack<int> st;
	for(int x : arr)
	{
		if (!st.empty() && st.top() == x)
		{
			st.pop();
		}
		else
		{
			st.push(x);
		}
	}
	vector<int> result(st.size());

	for (int i = st.size()-1; i >=0;i--)
	{
		result[i] = st.top();
		st.pop();
	}

	return result;
}

int main()
{
	vector<int> arr = {1,2,2,3,4,4,5};
	vector<int> ans = dup(arr);

	for (int x : ans)
	{
		cout << x << " ";
	}
	cout << endl;
	return 0;
}
