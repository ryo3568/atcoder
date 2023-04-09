#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}



int main() {
    string S;
    ll base = 1, ans = 0;
    cin >> S;
    for(int i=S.size()-1; i>=0; i--){
        ans += (S[i]-'A'+1) * base;
        base *= 26;
    }
    cout << ans << endl;
}