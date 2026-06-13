#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
	unordered_map <string,int> map ;
	map["One"] = 1;
	for (auto it : map)
	{
		cout << it.first << " "<<it.second;
	}
	cout << endl;
	return 0;
}
