#include <iostream>
#include <unordered_map>
using namespace std;
void display(unordered_map<int,string> order)
{
	for (auto i=order.begin();i!= order.end();i++)
	{
		cout << i->first << " : " << i -> second <<endl;
	}
}
int main()
{
	unordered_map<int,string> order;
	order[5] = "Five";
	order[10]= "Ten";
	order[20]= "Twenty";
	order[30]= "Thirty";
	order[40]= "Fifty";

	display(order);
	return 0;
}
