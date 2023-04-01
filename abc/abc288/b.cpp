#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int N, K;
    cin >> N >> K;
    vector<string> S(K);
    rep(i, 0, N) {
        if (i < K){
            cin >> S[i];
        }
        else{
            string s;
            cin >> s;
        }
    }
    sort(S.begin(), S.end());
    rep(i, 0, K){
        cout << S[i] << endl;
    }
}