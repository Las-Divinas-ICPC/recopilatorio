
// Sacar factoriales
vector<int> fact;

void precalc_fact(int n) {
    fact.resize(n + 1);
    fact[0] = 1;
    for (int i = 1; i <= n; ++i) {
        fact[i] = fact[i - 1] * i;
    }
}

// Sacar combinaciones
int comb(int n, int k) {
    return fact[n] / (fact[k] * fact[n - k]);
}

// Sacar permutaciones
int perm(int n, int k) {
    return fact[n] / fact[n - k];
}

// Sacar permutaciones con repeticion
int perm_rep(int n, int k) {
    return pow(n, k);
}

// Sacar combinaciones con repeticion
int comb_rep(int n, int k) {
    return comb(n + k - 1, k);
}

// Sacar combinaciones con repeticion
int comb_rep(int n, int k) {
    return comb(n + k - 1, k);
}
