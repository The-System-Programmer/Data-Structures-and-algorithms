#include <iostream>
using namespace std;
int main()
{
	int a = 121;
	int reversed = 0;
	while (a > 0)
	{
		int digit = a%10;
		reversed = reversed*10+digit;
		a = a/10;
	}
	cout << a << " "<<reversed;
}

