#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5; // Define a constant for the maximum number of nodes
bool vis[N];           // Array to keep track of visited nodes
vector<int> v[N];      // Adjacency list to store the graph

// DFS function to traverse the graph
void dfs(int s)
{
    vis[s] = true;     // Mark the current node as visited
    cout << s << endl; // Print the current node
    for (int i = 0; i < v[s].size(); i++)
    {
        int child = v[s][i]; // Get the adjacent node
        if (!vis[child])     // If the adjacent node is not visited
        {
            dfs(child); // Recursively call DFS on the adjacent node
        }
    }
}

int main()
{
    int n, e;
    // Read the number of nodes (n) and edges (e)
    cin >> n >> e;

    // Read the edges and populate the adjacency list
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b); // Add edge from a to b
        v[b].push_back(a); // Add edge from b to a (since the graph is undirected)
    }

    // Call DFS starting from node 1
    dfs(1);

    return 0;
}
