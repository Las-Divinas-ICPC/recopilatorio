void makeCriba(int n){
    vi criba(n);
    fore(i,0,n) criba[i] = i;
    for(int i = 2; i * i < n; i++){
        if(criba[i] != i) continue;
        for(int j = i*2; j < n; j += i)
            criba[j] = i;
    }
}
