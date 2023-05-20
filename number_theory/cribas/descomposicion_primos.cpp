vi descomposicion(int x){
    vi representacion;
    for(auto p : primes)
        while((x%p) == 0){
            x /= p;
            representacion.pb(p);
        }
    if(x > 1) representacion.pb(x);
    return representacion;
}
