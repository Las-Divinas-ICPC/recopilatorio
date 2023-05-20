// Buscando mínimo
int ternarySearch(vi& arr){
    int l = 0, r = sz(arr) - 1;
    while(r-l > 2){
        int m1 = l + (r-l) / 3;
        int m2 = r - (r-l) / 3;
        if(f(m1) < f(m2)) r = m2;
        else l = m1;
    }
    int ans = INF;
    for(int i = l; i <= r; i++)
        ans = min(ans, f(i));
    return ans;
}
