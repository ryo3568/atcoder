#include <iostream>
using namespace std;

int N, A[46], B[46], C[46];

int main() {
    int a, b, c;
    cin >> N;
    for (int i=0;i < N; i++){
        cin >> a;
        A[a % 46]++;
    }
    for (int i=0;i < N; i++){
        cin >> b;
        B[b % 46]++;
    }
    for (int i=0;i < N; i++){
        cin >> c;
        C[c % 46]++;
    }
    long long ans = 0;
    for(int i = 0; i < 46; i++){
        for(int j = 0; j < 46; j++){
            for(int k= 0; k < 46; k++){
                if((i + j + k) % 46 == 0) ans += (long long)(A[i]) * B[j] * C[k];
            }
        }
    }
    cout << ans << endl;
    return 0;
}