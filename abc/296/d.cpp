#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

#define INF (long long)2e+18

ll ceil(ll a, ll b){
    return (a + b - 1) / b;
}

int main() {
    ll N, M, b;
    cin >> N >> M;
    ll ans = INF;
    for(ll a = 1; a <= N; a++){
        b = ceil(M, a);
        if(b<=N) chmin(ans, a*b);
        // if(a > b) break;
        cout << a << " " << b << endl;
    }
    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}