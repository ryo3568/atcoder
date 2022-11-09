#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    while(true){
        ll n, m;
        cin >> n >> m;
        if(n==0 && m == 0)break;
        else if(n==0){
            cout << -1 * m * m << endl;
            continue;
        }
        else if(m==0){
            cout << n * n << endl;
            continue;
        }
        ll ans = n * n - m * m;
        for(ll i = 2; i <= m; i++){
            if(i - 2 >= n)break;
            ll plus = (n - i + 2) * (n - i + 2) + i - 2;
            ll minus = (m / i) * (m / i) * i + (m % i) * (2 * (m / i + 1) - 1);
            if(ans > (plus - minus))break;
            ans = plus - minus;
        }
        cout << ans << endl;
    }
}
