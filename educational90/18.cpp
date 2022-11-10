#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

double PI = 3.141592;

int main() {
    int T;
    int L, X, Y;
    int Q;
    double E[1009];
    cin >> T;
    cin >> L >> X >> Y;
    cin >> Q;
    rep(i, 0, Q) cin >> E[i];
    rep(i, 0, Q){
        double l = X * X  + (Y + (L / 2) * sin(E[i]/T)) * (Y + (L / 2) * sin(E[i]/T));
        double z = (L / 2) * sin(E[i]/ T) + L / 2;
        cout << atan(z / l) * 180 / PI << endl;
    }
    return 0;
}