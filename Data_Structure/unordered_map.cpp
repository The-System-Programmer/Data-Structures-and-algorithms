#include <iostream>
#include <unordered_map>

using namespace std;
int main()
{
	unordered_map<int,string> um;
	um[1] = "A";
	um[2] = "B";
	um[6] = "K";
	um[3] = "C";

	for (auto &p : um)
		cout<<p.first<<" "<<p.second<<endl;

	auto in = um.find(6);
	cout << in->first<<" "<<in->second;
	return 0;
}
