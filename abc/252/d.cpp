#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, 0, N) cin >> A[i];
    int diff, val;
    map<int,int> mp;
    if(A[N-1] == A[N-2]){
        diff = 1;
        val = 1;
        mp[A[N-1]] = 2;
    }
    else{
        diff = 0;
        val = 2;
        mp[A[N-1]] = 1;
        mp[A[N-2]] = 1;
    }
    int ans = 0;
    for(int i = N-3; i >= 0; i--){
        ans += (N + 1 - i) * (N - i) * (N - i - 1);
        mp[A[i]]++;
        if(mp[A[i]] == 1){
            val++;
        }
        else if (mp[A[i]] == 2){
            diff++;
        }
        ans -= diff * val;
    }
    cout << ans << endl;
}