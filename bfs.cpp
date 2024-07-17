#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5; // Define a constant for the maximum number of nodes
int dis[N];            // Array to store the distance of each node from the source
bool vis[N];           // Array to keep track of visited nodes
vector<int> v[N];      // Adjacency list to store the graph

// BFS function to traverse the graph and compute shortest distances
void bfs(int src)
{
    queue<int> q;    // Queue for BFS
    q.push(src);     // Push the source node into the queue
    vis[src] = true; // Mark the source node as visited
    dis[src] = 0;    // Distance to the source node is 0

    while (!q.empty())
    {
        int parent = q.front(); // Get the front node in the queue
        q.pop();                // Remove the front node from the queue
        cout << parent << endl; // Print the current node

        // Iterate over all adjacent nodes
        for (int i = 0; i < v[parent].size(); i++)
        {
            int child = v[parent][i]; // Get the adjacent node
            if (!vis[child])          // If the adjacent node is not visited
            {
                q.push(child);                // Push the adjacent node into the queue
                dis[child] = dis[parent] + 1; // Update the distance to the adjacent node
                vis[child] = true;            // Mark the adjacent node as visited
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e; // Read the number of nodes (n) and edges (e)

    // Read the edges and populate the adjacency list
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b); // Add edge from a to b
        v[b].push_back(a); // Add edge from b to a (since the graph is undirected)
    }

    bfs(1); // Call BFS starting from node 1

    // Print the distance of each node from the source node
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << ": " << dis[i] << endl;
    }

    return 0;
}
