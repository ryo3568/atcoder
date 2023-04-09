#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int main() {
    int N;
    cin >> N;
    vector<string> S(N), T(N);
    int node = 0;
    map<string, int> mp;
    map<int,int> path;
    rep(i, 0, N){
        cin >> S[i] >> T[i];
        if(mp.count(S[i]) == 0) mp[S[i]] = node++;
        if(mp.count(T[i]) == 0) mp[T[i]] = node++;
        path[mp[S[i]]] = mp[T[i]];
    }
    vector<int> visit(2*N, -1);
    int term = 0;
    bool ans = true;
    rep(i, 0, N){
        if(visit[mp[S[i]]]==-1){
            int node = mp[S[i]];
            while(path.count(node) != 0){
                visit[node] = term;
                node = path[node];
                if(visit[node]!=-1){
                    if(visit[node]==term) {
                        ans= false;
                    }
                    break;
                }
            }
        }
        term++;
    }
    if(ans) cout << "Yes"  << endl;
    else cout << "No" << endl;
}