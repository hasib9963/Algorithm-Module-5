#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;          // Read the number of nodes (n) and edges (e)
    vector<int> adj[n + 1]; // Create an adjacency list with n + 1 elements
    while (e--)             // Read the edges and populate the adjacency list
    {
        int a, b; // Read an edge between nodes a and b
        cin >> a >> b;
        adj[a].push_back(b); // Add b to the list of neighbors of a
        adj[b].push_back(a); // Add a to the list of neighbors of b (since the graph is undirected)
    }
    for (int i = 0; i <= n; i++) // Iterate over each node and print its adjacency list
    {
        cout << "Index " << i << ": ";
        for (int j = 0; j < adj[i].size(); j++) // Print all neighbors of node i
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}