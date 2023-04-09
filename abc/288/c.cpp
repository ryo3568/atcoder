#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

vector<int> path[200005];

ll dfs(int parent, int node, vector<bool> &visited){
    ll res = 0;
    visited[node] = true;
    rep(i, 0, path[node].size()){
        int next = path[node][i];
        if(!visited[next]) {
            res += dfs(node, next, visited);
        }
        else{
            if(next != parent) res++;
        }
    }
    return res;
}

int main() {
    int N, M, A, B;
    cin >> N >> M;
    rep(i, 0, M) {
        cin >> A >> B;
        A--;
        B--;
        path[A].push_back(B);
        path[B].push_back(A);
    }
    vector<bool> visited(N, false);

    ll ans = 0;

    rep(i, 0, N){
        if(!visited[i]){
            ans += dfs(-1, i, visited);
        }
    }
    cout << ans / 2 << endl;
}