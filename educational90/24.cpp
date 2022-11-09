#include <iostream> 
#include <cmath>
using namespace std;

long long N, K;
long long, A[1 << 18], B[1 << 18];

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= N; i++) cin >> B[i];

    long long Diff = 0;
    for (int i = 1; i <= N; i++) Diff += abs(A[i] - B[i]);
    if (Diff > K) {
        cout << "No" << endl;
        return 0;
    }

    if (Diff %2 != K % 2) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}