#include <iostream>
using namespace std;

int  N, P, Q;
long long A[109];

int main(){
    cin >> N >> P >> Q;
    for (int i=0;i < N; i++) cin >> A[i];
    long long tmp;
    int ans = 0;
    for(int i=0;i < N - 4;i ++){
        for(int j=i+1;j < N - 3;j++){
            for(int k=j+1;k < N - 2; k++){
                for(int l=k+1;l < N - 1; l++){
                    for(int m=l+1;m < N; m++){
                        tmp = A[i] % P;
                        tmp *= A[j];
                        tmp %= P;
                        tmp *= A[k];
                        tmp %= P;
                        tmp *= A[l];
                        tmp %= P;
                        tmp *= A[m];
                        tmp %= P;
                        if(tmp == Q) {
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
}