#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N), B(K);
    rep(i, 0, N) cin >> A[i];
    rep(i, 0, K) cin >> B[i];
    int maxv = 0;
    rep(i, 0, N){
        if(A[i] > maxv){
            maxv = A[i];
        }
    }
    bool ans = false;
    rep(i, 0, N){
        if(A[i] == maxv){
            rep(j, 0, K){
                if(i+1==B[j]) ans = true;
            }
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
