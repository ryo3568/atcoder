#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    rep(i, 0, N) cin >> A[i];
    int Q;
    cin >> Q;
    vector<int> l(Q), r(Q);
    rep(i, 0, Q) {
        cin >> l[i] >> r[i];
        l[i]--;
        r[i]--;
    }
    vector<bool> check(N);

    for(int i=0; i < N; i++){
        int sum = 0;
        for(int j=0; j < K; j++){
            if(i+j>=N) continue;
            sum += A[i+j];
        }
        if(sum%K==0)check[i] = true;
    }


    rep(i, 0, Q){
        bool ans = true;
        int index = l[i];
        for(int j=l[i]; j <= r[i]; j++){
            if(check[j]) index = j+K;
            if(index < j) ans = false;
        }
        if(ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}