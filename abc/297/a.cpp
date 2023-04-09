#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int N, D;
    cin >> N >> D;
    vector<int> T(N);
    rep(i, 0, N) cin >> T[i];
    rep(i, 1, N){
        if(T[i] - T[i-1] <= D) {
            cout << T[i] <<endl;
            return 0;
        }
    } 
    cout << -1 << endl;
    return 0;
    
}