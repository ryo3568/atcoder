#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int N, M;
int A[12][12];
int path[12][12];
bool used[12];

ll dfs(int n, int i){
    used[n] = true;
    ll res = INT_MAX;
    rep(j, 1, N+1){
        if(used[j]) continue;
        if(path[n][j]==1) continue;
        res = min(dfs(j, i+1), res);
    }
    used[n] = false;
    return res + A[n][i];
}

int main() {
    cin >> N;
    rep(i, 1, N+1) {
        rep(j, 1, N+1) cin >> A[i][j];
    }
    cin >> M;
    int X, Y;
    rep(i, 1, M+1){
        cin >> X >> Y;
        path[X][Y] = 1;
        path[Y][X] = 1;
    }
    ll ans = INT_MAX;
    rep(i, 1, N+1){
        ans = min(dfs(i, 1), ans);
    }
    cout << ans << endl;
    return 0;
}