// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/ctci-bfs-shortest-reach/problem?isFullScreen=true
// Problem     BFS: Shortest Reach in a Graph
// Difficulty  Hard
// Subdomain   N/A
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-10-06, 12:16 p.m.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

class Graph {
    int nodes;
    vector<vector<int>> adj;

    public:
        Graph(int n) {
            nodes = n;
            adj.resize(n);
        }

        void add_edge(int u, int v) {
            // Convert from 1-based indexing to 0-based indexing
            adj[u - 1].push_back(v - 1);
            adj[v - 1].push_back(u - 1);
        }

        vector<int> shortest_reach(int start) {
            int s = start - 1; // 0-based start node
            vector<int> dist(nodes, -1);
            queue<int> q;

            q.push(s);
            dist[s] = 0;

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : adj[u]) {
                    if (dist[v] == -1) {
                        dist[v] = dist[u] + 6; // Each edge has a distance of 6
                        q.push(v);
                    }
                }
            }

            // Collect distances for all nodes except the start node
            vector<int> result;
            for (int i = 0; i < nodes; ++i) {
                if (i != s) {
                    result.push_back(dist[i]);
                }
            }

            return result;
        }
};

int main() {
    int queries;
    cin >> queries;
        
    for (int t = 0; t < queries; t++) {

        int n, m;
        cin >> n >> m;
        Graph problem_graph(n);

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            problem_graph.add_edge(u, v);
        }

        int start_node;
        cin >> start_node;

        vector<int> distances = problem_graph.shortest_reach(start_node);

        for (int i = 0; i < distances.size(); i++) {
            cout << distances[i] << (i == distances.size() - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}
