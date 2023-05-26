/*Modulo properties
    (a + b) mod m = (a mod m + b mod m) mod m
    (a − b) mod m = (a mod m − b mod m) mod m
    (a · b) mod m = (a mod m · b mod m) mod m
*/

typedef long long lli;
 
const lli mod = 1e9 + 7;
 
lli sum(lli a, lli b){
    return ((a%mod) + (b%mod))%mod;
}
 
lli mul(lli a, lli b){
    return ((a % mod) * (b % mod)) % mod;
}
 
lli sub(lli a, lli b){
    return ((a - b)+mod)%mod;
}
 
lli modpow(lli x, lli n){
    if(n == 1) return x%mod;
    if(n == 0) return 1%mod;
    lli u = modpow(x, n/2);
    u = mul(u, u);
    if(n%2 == 1) u = mul(u, x);
    return u;
}
lli inv(lli a){
    return modpow(a, mod-2);
}
 
lli division(lli a, lli b){
    return mul(a, inv(b));
}