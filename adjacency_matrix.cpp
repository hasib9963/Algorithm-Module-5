#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;         // Read the number of nodes (n) and edges (e)
    int adj[n + 1][n + 1]; // Initialize an adjacency matrix with dimensions (n+1) x (n+1)
    // Initialize the adjacency matrix
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            adj[i][j] = 0; // Set all elements to 0
            if (i == j)
                adj[i][j] = 1; // set self-loops to 1 (typically not necessary)
        }
    }

    while (e--) // Read the edges and populate the adjacency matrix
    {
        int a, b;
        cin >> a >> b; // Read an edge between nodes a and b
        // Since the graph is undirected, set adj[a][b] and adj[b][a] to 1
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    // Print the adjacency matrix
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}