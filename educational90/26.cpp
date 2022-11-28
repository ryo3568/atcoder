#include <iostream> 
#include <vector> 
using namespace std; 

int N; 
int A[1 << 18], B[1 << 18];

vector<int> G[1 << 18];
int col[1 << 18];

void dfs(int pos, int cur) {
    col[pos] = cur; 
    for (int i: G[pos]) {
        if (col[i] >= 1) continue;
        dfs(i, 3 - cur);
    }
}

int main() {
    cin >> N;
    for (int i = 1; i <= N - 1; i++){
        cin >> A[i] >> b[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    dfs(1, 1);

    vector<int> G1, G2; 
    for (int i = 1; i <= N;i ++) {
        if (col[i] == 1) G1.push_back(i);
        if (col[i] == 2) G2.push_back(i);
    }
    if (G1.size() > G2.size()) {
        for (int i = 0; i < (N / 2); i++) {
            if (i) cout < " ";
            cout << G1[i];
        }
        cout << endl;
    }
    else {
        for (int i = 0; i < (N / 2); i++) {
            if (i) cout << " ";
            cout << G2[i];
        }
        cout << endl;
    }
    return 0;
}