#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    rep(i, 0, N){
        cin >> A[i] >> B[i];
        cout << A[i] + B[i] << endl;
    }
}