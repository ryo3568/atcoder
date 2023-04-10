#include <bits/stdc++.h> 
using namespace std; 

int main(){
    const int n = 8;
    string s;
    cin >> s;
    map<char, vector<int>> mp;
    for(int i = 0; i < n; i++) {
        mp[s[i]].push_back(i);
    }

    bool ok = 1;
    ok &= mp['B'][0] % 2 != mp['B'][1] % 2;
    ok &= mp['R'][0] < mp['K'][0] and mp['K'][0] < mp['R'][1];
    cout << (ok ? "Yes\n" : "No\n");
}