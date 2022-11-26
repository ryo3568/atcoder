#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int N;
int path[100005][100005];
int ans[10005];

void dfp(int k){
    rep(i, 1, N){
        if(path[k][i] && ans[i] == 0){
            if(ans[k] == 1) ans[i] = 2;
            else ans[i] = 1;
            dfp(i);
        }
    }
}

int main() {
    cin >> N;
    int a, b;
    rep(i, 0, N){
        cin >> a >> b;
        path[a][b] = 1;
        path[b][a] = 1;
    }
    dfp(1);
    rep(i, 1, N+1){
        if(i > 1) cout << " ";
        if(ans[i] == 1) cout << i;
    }
    return 0;
}