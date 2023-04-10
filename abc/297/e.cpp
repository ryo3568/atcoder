#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

void show_dict(set<ll> st){
    for(auto v: st){
        cout << v << " ";
    }
    cout << endl;
}

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    set<ll> st;
    rep(i, 0, N) {
        cin >> A[i];
        if(!st.count(A[i])){
            st.insert(A[i]);
        }
    } 
    ll low = 0;
    sort(A.begin(), A.end());
    rep(i, 0, K){
        auto it = st.upper_bound(low);
        chmax(low, *it);
        rep(j, 0, N){
            st.insert(*it + A[j]);
        }
    }
    auto it = st.begin();
    rep(i, 0, K-1){
        it++;
    }
    cout << *it << endl;
}