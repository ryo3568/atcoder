#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < (1 <<N); i++){
        string Candidate = "";
        for (int j = N - 1; j >= 0; j--){
            if ((i & (1 << j)) == 0){
                Candidate += "(";
            }
            else {
                Candidate += ")";
            }
        }
        bool I = hantei(Candidate);
        if (I == true) cout << Candidate << endl;
    }
    return 0;
}