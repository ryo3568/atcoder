#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int N = 100; // 囚人の人数
int c; // 囚人を部屋に招いた回数
int person; // 部屋に招く囚人の番号 
int cnt[100];
int before[100];
int first[100];


int iteration = 10000; // 実験回数
int saccess=0;
int failure=0;
int num[10000];

void reset(){
    rep(i, 0, 100){
        cnt[i] = 0;
        before[i] = false;
        first[i] = false;
        c = 0;
    }
}

int main() {
    int hash_max; 
    cin >> hash_max; 
    double result[hash_max];
    rep(hash, 0, hash_max){
        saccess = 0;
        failure = 0;
        rep(iter, 0, iteration){
            bool sw = rand() % 2;
            reset();
            while(true){
                person = rand() % 100; 
                if(first[person]==false){
                    sw = !sw;
                    first[person] = true;
                }
                else{
                    if(before[person] == sw){
                        cnt[person]++;
                    }
                    else{
                        cnt[person] = 0;
                    }
                }
                before[person] = sw;
                c++;
                if(cnt[person] == hash){
                    break;
                }
            }
            bool result = true;
            rep(i, 0, N){
                if(!first[i]){
                    result = false;
                    break;
                }
            }
            if(result){
                saccess++;
            }
            else{
                failure++;
            }
            num[iter] = c;
        }
        int avg = 0;
        rep(i, 0, iteration){
            avg += num[i];
        }
        printf("閾値：%d , 釈放回数：%d , 刑執行回数：%d , 成功確率：%lf, 囚人一人当たりの部屋に招かれた回数：%lf\n", hash, saccess, failure, (double)(saccess) / iteration, (double)avg / iteration / 100);
        result[hash] = (double)(saccess) / iteration;
    }
    rep(i, 0, hash_max){
        if(i) cout << ", ";
        printf("%.3lf", result[i]);
    }
    cout << endl;
    return 0;
}