#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    rep(i, 0, N) cin >> S[i];
    int ans = INT_MAX;
    rep(i, 0, 10){
        vector<int> time(N);
        rep(j, 0, N){
            rep(k, 0, 10){
                if(S[j][k] - '0' == i){
                    time[j] = k;
                    rep(l, 0, j){
                        if(time[l]==time[j])time[j] += 10;
                    }
                }
            }
        }
        int now = 0;
        rep(j, 0, N){
            chmax(now, time[j]);
        }
        chmin(ans, now);
    }
    cout << ans << endl;
}