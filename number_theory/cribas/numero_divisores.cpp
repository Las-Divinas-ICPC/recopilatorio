void makeCriba(int n){
    vi criba(n, 2);
    criba[0] = 0;
    criba[1] = 1;
    fore(i,2,n)
        for(int j = i*2; j < n; j += i)
            criba[j]++;
}
