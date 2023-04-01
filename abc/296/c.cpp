#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    ll N, X;
    cin >> N >> X;
    vector<ll> A(N);
    bool ans = false;
    rep(i, 0, N) cin >> A[i];
    sort(A.begin(), A.end());
    ll j = 0;
    for(int i = 0; i < N; i++){
        while(A[j] < A[i] + X && j < N) j++;
        if(j == N) break;
        if(A[j] == A[i] + X) ans = true;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}