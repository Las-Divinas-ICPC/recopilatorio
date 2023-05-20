int binaryLifting(vi& arr, int x){
    int c = 0;
    for(int p = sz(arr); p; p /= 2)
        while(c+p < sz(arr) && arr[c+p] <= x) c+=p;
    if(arr[c] == x) return c;
    return -1;
}
