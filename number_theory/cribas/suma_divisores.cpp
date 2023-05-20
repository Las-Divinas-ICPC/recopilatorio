void makeCriba(){
    vi criba(n, 1);
    criba[0] = 0;
    fore(i,2,n)
        for(int j = i; j < n; j+= i)
            criba[j] += i;
}
