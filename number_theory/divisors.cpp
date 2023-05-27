
set<int> divisors(int n) {
    set <int> ans;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            ans.insert(i);
            ans.insert(n / i);
        }
    }
    return ans;
}