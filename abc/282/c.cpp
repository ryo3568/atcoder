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
    bool flag = false;
    rep(i, 0, N){
        if(S[i] == '"'){
            flag = !flag;
        }
        else if(S[i] == ','){
            if(!flag)S[i] = '.';
        }
        cout << S[i];
    }
    cout << endl;
    return 0;
}