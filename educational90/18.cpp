#include <iostream>
#include <cmath>
using namespace std;

long long T;
long long L, X, Y;
int Q;
int E[1009];
long double PI = 3.14159265358979;

int main(){
    cin >> T;
    cin >> L >> X >> Y;
    cin >> Q;
    for (int i = 0; i < Q; i++) cin >> E[i];
    for (int i = 0; i < Q; i++){
        long double z = (L / 2.0) - (L / 2.0) * cos(E[i]*2.0*PI/T);
        long double y = -(L / 2.0) * sin(E[i]*2.0 *PI/T);
        long double l = sqrt((Y - y) * (Y - y) + X * X);
        long double ans = atan2(z, l);
        ans *= 180.0L / PI;
        printf("%.12Lf\n", ans);
    }
}
