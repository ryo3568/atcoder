#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    string S;
    cin >> S;
    int b1 = -1, b2, r1 = -1, r2, k;
    rep(i, 0, 8){
        if(S[i] == 'B' && b1 == -1) b1 = i;
        else if(S[i] == 'B') b2 = i;

        if(S[i] == 'R' && r1 == -1) r1 = i;
        else if(S[i] == 'R') r2 = i;

        if(S[i] == 'K') k = i;
    }
    if((b1%2 != b2%2) && r1 < k && k < r2) cout << "Yes" << endl;
    else cout << "No" << endl;
}