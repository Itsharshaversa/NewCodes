#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, w;   // from u to v with weight w
};

int main() {
    int V, E;
    cin >> V >> E;

    vector<Edge> edges(E);

    for (int i = 0; i < E; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    int src;
    cin >> src;

    const int INF = 1e9;
    vector<int> dist(V, INF);
    dist[src] = 0;

    // Step 1: Relax all edges V-1 times
    for (int i = 1; i <= V - 1; i++) {
        for (auto &edge : edges) {
            if (dist[edge.u] != INF &&
                dist[edge.u] + edge.w < dist[edge.v]) {
                dist[edge.v] = dist[edge.u] + edge.w;
            }
        }
    }

    // Step 2: Check for negative weight cycle
    for (auto &edge : edges) {
        if (dist[edge.u] != INF &&
            dist[edge.u] + edge.w < dist[edge.v]) {
            cout << "Graph contains a negative weight cycle\n";
            return 0;
        }
    }

    // Step 3: Print distances
    cout << "Vertex Distance from Source\n";
    for (int i = 0; i < V; i++) {
        cout << i << " \t\t ";
        if (dist[i] == INF)
            cout << "INF\n";
        else
            cout << dist[i] << "\n";
    }

    return 0;
}
