#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    vector<string> S(8);
    rep(i, 0, 8) cin >> S[i];
    int ans;
    char ans1;
    rep(i, 0, 8){
        rep(j, 0, 8){
            if(S[i][j] == '*'){
                ans1 = 'a' + j;
                ans = 8 - i;
            }
        }
    }
    cout << ans1 << ans << endl;
}