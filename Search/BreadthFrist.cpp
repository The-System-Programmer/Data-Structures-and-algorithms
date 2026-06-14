#include <iostream>
#include <vector>

using namespace std;

void display(vector<vector<int>>& adj,int n)
{
    for (int i = 1 ; i <= n ; i++ )
    {
        cout << i << " -> ";
        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    vector<vector<int>> adj(n+1);

    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);

    adj[2].push_back(1);
    adj[2].push_back(3);    

    adj[3].push_back(1);
    adj[3].push_back(2);

    adj[4].push_back(1);
    adj[4].push_back(5);

    adj[5].push_back(4);
    display(adj,n);
    return 0;
}