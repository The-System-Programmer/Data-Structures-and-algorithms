#include <iostream>
#include <string>
using namespace std;

void naive(const string & text , const string & pattern)
{
    int n = text.length();
    int m = pattern.length();
    for (int i = 0 ; i <= n-m;i++)
    {
        int j;
        for (int j = 0 ; j < m ; j++)
        {
            if (text[i+j] != pattern[j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << "Pattern found at index " << i << endl;
        }
    }
}