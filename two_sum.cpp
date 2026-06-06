#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

pair<int,int> findAgePair(vector<int> & ages,int target_sum)
{
	unordered_set<int> notebook;
	for (int age : ages)
	{
		int complement = target_sum - age;
		if (notebook.count(complement))
		{
			return (complement,age);
		}
		notebook.insert(age);
	}
	return {-1,-1};
}
int main()
{
	vector<int> party_guests = {14,7,10,11,20,5};
	int target = 30;

	pair<int,int> result = findAgePair(party_guests,target);
	if (result.first != -1)
		cout << result.first << " and " << result.second;
	else
		cout << "Nope";
	return 0;
}
