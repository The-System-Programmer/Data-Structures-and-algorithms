#include <iostream>
#include <vector>
using namespace std;

// Step 1: Build LPS array
vector<int> computeLPS(string pattern) {
    int m = pattern.size();
    vector<int> lps(m, 0);

    int len = 0; // length of previous longest prefix suffix
    int i = 1;

    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1]; // fallback
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

// Step 2: KMP Search
void KMP(string text, string pattern) {
    vector<int> lps = computeLPS(pattern);

    int i = 0; // index for text
    int j = 0; // index for pattern

    while (i < text.size()) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }

        if (j == pattern.size()) {
            cout << "Pattern found at index " << i - j << endl;
            j = lps[j - 1]; // continue searching
        } else if (i < text.size() && text[i] != pattern[j]) {
            if (j != 0) {
                j = lps[j - 1]; // use LPS to skip
            } else {
                i++;
            }
        }
    }
}

// Driver
int main() {
    string text = "ababcababaad";
    string pattern = "ababa";

    KMP(text, pattern);

    return 0;
}
