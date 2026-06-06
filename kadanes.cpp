#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int maxCoins(vector<int>& coins)
{
	int backpack = 0;
	int best = INT_MIN;

	for (int x : coins)
	{
		backpack += x;
		best = max(best,backpack);

		if (backpack < 0)
			backpack = 0;
	}
	return best;
}
int main()
{
	vector <int> coins = {-2,1,-3,4,-1,2,1,-5,4};
	cout << maxCoins(coins) << endl;
	return 0; 
	}

