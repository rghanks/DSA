#include <bits/stdc++.h>
using namespace std;

int longest_path(int n, int m, vector<vector<pair<int, int>>> adj_list, int s, int t) {
    // Initialize the distance array
    vector<int> dist(n, -INT_MAX);
    dist[s] = 0;

    // Initialize the in-degree array
    vector<int> in_deg(n, 0);
    for (int i = 0; i < n; i++) {
        for (auto neighbor_pair : adj_list[i]) {
            int neighbor = neighbor_pair.first;
            in_deg[neighbor]++;
        }
    }

    // Create a queue and add the source node
    queue<int> q;
    q.push(s);

    // Perform a modified topological sort using BFS
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (auto neighbor_pair : adj_list[curr]) {
            int neighbor = neighbor_pair.first;
            int weight = neighbor_pair.second;
            int new_dist = dist[curr] + weight;
            if (dist[neighbor] < new_dist) {
                dist[neighbor] = new_dist;
            }
            in_deg[neighbor]--;
            if (in_deg[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // Return the distance to the destination node
    return (dist[t] != -INT_MAX) ? dist[t] : INT_MIN;
}


int main() {
    // Test case: graph with 5 vertices and 7 edges
    int n = 5;
    int m = 6;
    vector<vector<pair<int, int>>> adj_list = {
        {{0, 1}, {1, 2}},
        {{2, 3}, {3, 4}},
        {{0, 4}, {0,3}}  // vertex 4 has no outgoing edges
    };
    int s = 0;
    int t = 4;
    cout << longest_path(n, m, adj_list, s, t) << endl;
    //cout << "Longest path from " << s << " to " << t << ": " << result << endl;
    // Expected output: Longest path from 0 to 4: 4
    return 0;
}
