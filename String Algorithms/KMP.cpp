#include <string>
using namespace std;

void KMPSearch(string text , string pattern)
{
    int n = text.size();
    int m = pattern.size();
    vector<int> lps = buildLPS(pattern);
    int i = 0 , j = 0;
    while(i<n)
    {
        if (text[i] == pattern[j])
        {
            j++;i++
        }
        if (j == m)
        {
            cout << "Pattern found at index " << i-j << endl;
            j = lps[j-1];
        }
        else if (i<n && text[i] != pattern[j])
        {
            if (j!= 0)
            {
                j = lps[j-1];
            }
            else
            {
                i++;
            }
        }
    }
}

int main()
{
    string text = "ababcaabcabababd";
    string pattern = "ababd";
    KMPSearch(text,pattern);
    return 0;
}