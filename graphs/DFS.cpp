vi adj[N];
bool visited[N];

void dfs(int s) {
    if (visited[s]) return;
    visited[s] = true;
    // process node s
    for (auto u: adj[s]) {
    dfs(u);
    }
}

/*DFS without visited array */
vi dis(N);
void dfs (int u, int d = 0, int pr = -1){
    dis[u] = d;
    for(auto v: u){
        if(v != pr)
            dfs(v, d+1, u);
    }
}

/* Iterative DFS */
void Graph::DFS(int s, vector<bool>& visited){
    stack<int> stack;
    stack.push(s);
 
    while (!stack.empty()){
        int s = stack.top();
        stack.pop();
 
        if (!visited[s]) visited[s] = true;
 
        for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
            if (!visited[*i])
                stack.push(*i);
    }
}