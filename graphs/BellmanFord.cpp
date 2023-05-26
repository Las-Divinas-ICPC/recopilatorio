/*finds shortest paths from a starting node to all nodes of the graph.
No cycles w negative len*/
for (int i = 1; i <= n; i++) distance[i] = INF;
distance[x] = 0;
for (int i = 1; i <= n-1; i++) {
for (auto e : edges) {
    int a, b, w;
    tie(a, b, w) = e;
    distance[b] = min(distance[b], distance[a]+w);
    }
}
/*The Bellman–Ford algorithm can also be used to check if the graph contains a
cycle with negative length. */