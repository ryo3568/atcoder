#include <iostream>
using namespace std;

string N;
int K;

string to_base9(string N){
    long long tmp = 0, base = 1;
    int size = N.size();
    string res = "";
    for (int i = size - 1; i >= 0; i--){
        int t = N[i] - '0';
        tmp += t * base;
        base *= 8;
    }
    while(tmp >= 9){
        int m = tmp % 9;
        res = to_string(m) + res;
        tmp = tmp / 9;
    }
    res = to_string(tmp) + res;
    return res;
}

string change(string N){
    for (int i=0;i < N.size(); i++){
        if(N[i] == '8') N[i] = '5';
    }
    return N;
}

int main() {
    cin >> N >> K;
    for (int i = 0; i < K; i++){
        N = to_base9(N);
        N = change(N);
    }
    cout << N << endl;
}