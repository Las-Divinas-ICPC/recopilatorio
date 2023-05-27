struct dsu{
    vi parent; //A que conjunto pertenece
    vi z; //Tamanio del conjunto

    void init(int n){
        parent = vi(n);
        z = vi(n,1);
        fore(i,0,n) parent[i] = i;
    }

    int get(int v){
        if(parent[v] == v) return v;
        parent[v] = get(parent[v]);
        return parent[v];
    }

    //True: Ambos nodos pertenecen a distintos conjuntos antes de la union
    bool unite(int v1, int v2){
        v1 = get(v1);
        v2 = get(v2);
        if(v1 == v2) return true;
        if(z[v1] > z[v2]){
            parent[v2] = v1;
            z[v1] += z[v2];
        } 
        else{
            parent[v1] = v2;
            z[v2] += v1;
        } 
        return false;
    }

    
};