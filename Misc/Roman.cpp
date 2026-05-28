#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string n)
{
    unordered_map<char,int> mp;
    mp =
        {
            {'I',1},
            {'X',10},
            {'V',5},
            {'M',1000},
            {'L',50},
            {'C',100},
            {'D',500}
        };
    int total = 0;
    for (int i = 0 ; i < n.size();i++)
    {
        if (i+1 < n.size() && mp[n[i]]<mp[n[i+1]])
        {
            total = total-mp[n[i]];
        }
        else
        {
            total = total+mp[n[i]];
        }
    }
    return total;
}
int main()
{
    string numeral;
    cout<<"Enter the roman numeral : ";
    cin>>numeral;
    cout<<romanToInt(numeral);
    return 0;
}
