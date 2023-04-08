#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long N;
long long A[100009];
long long B[100009];

int main() {
   cin >> N;
   for (int i = 0; i < N; i++){
    cin >> A[i];
   } 
   for (int i = 0; i < N; i++){
    cin >> B[i];
   } 
   sort(A, A + N);
   sort(B, B + N);
   long long ans = 0;
    for (int i = N - 1; i >= 0; i--){
        ans += abs(A[i] - B[i]);
        cout << abs(A[i] - B[i]) << endl;;
    }
    cout << ans << endl;
    return 0;
}