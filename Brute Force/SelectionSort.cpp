#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {34, 23, 53, 23, 45, 64};
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(v[i], v[minIndex]);
        }
    }
    for (int x : v)
    {
        cout << x << " ";
    }
}
