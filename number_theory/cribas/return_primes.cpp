vi makeCriba(){
    criba[0] = criba[1] = false;
    for(int i = 2; i * i < n; i++){
        if(!criba[i]) continue;
        for(int j = i * i; j < n; j += i)
            criba[j] = false;
    }
    vi primes;
    fore(i,2,n)
        if(criba[i])
            primes.pb(i);

    return primes;
}
