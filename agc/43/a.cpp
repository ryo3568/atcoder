#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> s(H);
    rep(i, 0, H){
        cin >> s[i];
    }
    vector<vector<int>> dp(H, vector<int>(W));
    rep(i, 0, W){
        if(i){
            if(s[0][i-1]=='.' && s[0][i]=='#') dp[0][i] = dp[0][i-1] + 1;
            else dp[0][i] = dp[0][i-1];
        }
        else{
            if(s[0][i] == '.') dp[0][i] = 0;
            else dp[0][i] = 1;
        }
    }
    rep(i, 1, H){
        rep(j, 0, W){
            if(s[i-1][j] == '.' && s[i][j] == '#') dp[i][j] = dp[i-1][j] + 1;
            else dp[i][j] = dp[i-1][j];
            if(j){
                if(s[i][j-1] == '.' && s[i][j] == '#') chmin(dp[i][j], dp[i][j-1] + 1);
                else chmin(dp[i][j], dp[i][j-1]);
            }
        }
    }
    cout << dp[H-1][W-1] << endl;
}