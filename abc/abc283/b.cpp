#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int N;
    string S;
    cin >> N >> S;
    S = 'a' + S;
    for(int i = 1; i <= N-1; i++){
        int ans = 0;
        for(int l = 1; l + i <= N; l++){
            if(S[l]!=S[l+i]) ans = l;
            else break;
        }
        cout << ans << endl;
    }
}