#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<string,int> ageMap = {{"Rohit",19},{"Rahul",24}};
	for (auto it : ageMap)
	{
		cout << it.first << " "<<it.second<<endl;
	}

	cout << ageMap["Rohit"]<<endl;
	return 0;
}
