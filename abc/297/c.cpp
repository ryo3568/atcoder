#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    rep(i, 0, H) cin >> S[i];
    rep(i, 0, H){
        rep(j, 1, W){
            if(S[i][j] == 'T' && S[i][j-1] == 'T'){
                S[i][j] = 'C';
                S[i][j-1] = 'P';
            }
        }
        cout << S[i] << endl;
    }
    return 0;
}