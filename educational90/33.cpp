#include <iostream>
#include <cmath>
using namespace std;

double H, W;

int main() {
    cin >> H >> W;
    if (H == 1) cout << W << endl;
    else if (W == 1) cout << H << endl;
    else cout << ceil(H / 2.0) * ceil(W / 2.0) << endl;
    return 0;
}