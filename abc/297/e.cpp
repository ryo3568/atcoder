#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    ll N, K;
    cin >> N >> K;
    vector<ll> A(N);
    priority_queue<ll, vector<ll>, greater<ll>> q;
    set<ll> st;
    ll index, size = 0, max = 0;
    rep(i, 0, N) {
        cin >> A[i];
        q.push(A[i]);
        if(!st.count(A[i])){
            st.insert(A[i]);
            size++;
        }
        chmax(max, A[i]);
    } 
    sort(A.begin(), A.end());
    while(1){
        rep(i, 0, N){
            ll tmp = q.top() + A[i];
            if(!st.count(tmp)){
                st.insert(tmp);
                size++;
                q.push(tmp);
                chmax(max, tmp);
                if(size == K) index = max; 
                else if(size > K){
                    if(index > tmp) index = tmp;
                }
            }
        }
        q.pop();
        if(size >= K && index < q.top() + A[0]) break;
    }
    cout << index << endl;
}