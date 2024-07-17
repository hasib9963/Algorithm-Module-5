#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e; // Read the number of nodes (n) and edges (e)
    vector<pair<int, int>> v; // Create a vector to store pairs of integers representing edges
    while (e--) // Read the edges and populate the vector
    {
        int a, b;
        cin >> a >> b; // Read an edge between nodes a and b
        v.push_back({a, b});   // Store the edge as a pair in the vector
    }
    for (int i = 0; i < v.size(); i++) // Iterate over the vector and print each edge
    {
        cout << v[i].first << " " << v[i].second << endl; // Print the first and second elements of the pair (edge)
    }
    return 0;
}