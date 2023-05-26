#define lsb(x) (x & -x)
// 1-indexado
vi fenwick(N);

void build(){
    fore(i,1,n+1){
        fenwick[i] += arr[i];
        int pr = i + lsb(i);
        if(pr <= n) fenwick[pr] += fenwick[i];
    }
}

void update(int index, int delta){
    for(; index <= n; index += lsb(index))
        fenwick[index] += delta;
}

// Query punto
int query(int index){
    int result = 0;
    for(; index > 0; index -= lsb(index))
        result += fenwick[index];
    return result;
}

// Query rango
inline int query(int left, int right){
    return query(right) - query(left - 1);
}