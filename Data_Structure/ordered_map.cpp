#include <iostream>
#include <map>

using namespace std;

int main()
{
	map <int,string>m;
	m[1] = "Apple";
	m[2] = "Orange";
	m[3] = "Banana";
	m.insert({4,"Mango"});
	m[5] = "Orange";

	for (auto &p : m)
	{
		cout<<p.first<<"->"<<p.second<<endl;
	}
	// Access
	cout << m[1]<<endl;

	// Find
	auto it = m.find(2);
	if (it != m.end())
		cout << it->second<<endl;

	// Remove
	m.erase(3);

	// Size
	cout << m.size();
}
