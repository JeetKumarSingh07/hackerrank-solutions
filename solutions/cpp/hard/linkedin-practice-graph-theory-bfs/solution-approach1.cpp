// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/linkedin-practice-graph-theory-bfs/problem?isFullScreen=true
// Problem     BFS: Shortest Reach
// Difficulty  Hard
// Subdomain   LinkedIn Placements
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-10-06, 12:06 p.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> bfs(int n, int m, vector<vector<int>>& edges, int s) {
    // Build adjacency list for 1-based indexing
    vector<vector<int>> adj(n + 1);
    for (const auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Array to store shortest distance to each node, initialized to -1
    vector<int> dist(n + 1, -1);
    
    // BFS initialization
    queue<int> q;
    q.push(s);
    dist[s] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            // If node v has not been visited yet
            if (dist[v] == -1) {
                dist[v] = dist[u] + 6; // Each edge weighs 6
                q.push(v);
            }
        }
    }

    // Collect result for nodes other than starting node s
    vector<int> result;
    for (int i = 1; i <= n; i++) {
        if (i != s) {
            result.push_back(dist[i]);
        }
    }

    return result;
}

int main() {
    int q;
    if (!(cin >> q)) return 0;

    while (q--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> edges(m, vector<int>(2));
        for (int i = 0; i < m; i++) {
            cin >> edges[i][0] >> edges[i][1];
        }

        int s;
        cin >> s;

        vector<int> result = bfs(n, m, edges, s);

        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << (i == result.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}
