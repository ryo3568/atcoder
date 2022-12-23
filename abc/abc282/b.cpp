#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int N, M;
    string S[50];
    cin >> N >> M;
    rep(i, 0, N) cin >> S[i];
    int ans = 0;
    rep(i, 0, N){
        rep(j, i+1, N){
            int tmp = 0;
            rep(k, 0, M){
                if(S[i][k]=='o' || S[j][k] == 'o') tmp++;
            }
            if(tmp == M) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}