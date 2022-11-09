#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    while(true){
        int n;
        cin >> n;
        if(n==0)break;
        int ans = 0;
        rep(i, 0, n){
            int k;
            cin >> k;
            chmax(ans, k);
        }
        cout << ans << endl;
    }
}