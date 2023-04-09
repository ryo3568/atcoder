#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    double N, K;
    cin >> N >> K;
    double ans =  (6*(K-1)*(N-K) + 3*(N-1) + 1) / (N*N*N);
    printf("%.10lf\n", ans);
}