#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    ll A, B;
    cin >> A >> B;
    ll ans = 0;
    while(A != B){
        if(A < B){
            if(B%A == 0){
                ans += B/A - 1;
                break;
            }
            ans += B / A;
            B = B % A;
            if(B == 1){
                ans += A - 1;
                break;
            }
        }else{
            if(A%B == 0){
                ans += A / B - 1;
                break;
            }
            ans += A / B;
            A = A % B;
            if(A == 1){
                ans += B - 1;
                break;
            }
        }
    }
    cout << ans << endl;
}