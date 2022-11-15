#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = a;i < b; ++i)
using ll = long long;
template <typename T> bool chmax(T &a, const T& b) { if (a<b) { a=b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) { if (b<a) { a=b; return true;} return false;}

int N = 100;
bool flg = false;
int cnt[100];
bool before[100];
bool first[100];

 

int main() {
    int person, c = 0;
    while(true){
        person = rand() % 100;
        if(first[person]==false){
            if(flg==true) cnt[person]++; // 自分以外に誰か一人以上来ている
            flg = !flg;
            first[person] = true;
            cnt[person]++; // 自分の分
        }
        else{
            if(before[person] != flg){
                cnt[person]++; // 前回部屋に入ったときから今回までの間に誰か一人以上新しい人が来ている
            }
        }
        before[person] = flg;
        c++;
        if(cnt[person] == 100){
            cout << c << " : 宣言 " << endl;
        }
    }
    rep(i, 0, 100){
        cout << first[i] << " " << cnt[i] << endl;
    }
    return 0;
}