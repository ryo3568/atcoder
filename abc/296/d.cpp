#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

ll ceil(ll a, ll b){
    return (a + b - 1) / b;
}

int main() {
    ll N, M, b;
    cin >> N >> M;
    if(N >= M){
        cout << M << endl;
        return 0;
    }
    if(N < sqrt(M)){
        cout << -1 << endl;
        return 0;
    }
    ll ans = ;
    for(ll a = sqrt(M); a <= N; a++){
        b = ceil(M, a);
        chmin(ans, a*b);
    }
    cout << ans << endl;
    return 0;
}