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
    char s = S[0];
    bool ans = true;
    rep(i, 1, S.size()){
        if(s == 'M' && S[i] == 'M'){
            ans = false;
        }
        if(s == 'F' && S[i] == 'F'){
            ans = false;
        }
        s = S[i];
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}