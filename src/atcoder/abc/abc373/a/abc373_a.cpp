#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    for (int i = 1; i <= 12; ++i) {
        string s;
        cin >> s;  // 文字列 s の入力
        if ((int)s.size() == i) {  // 長さが i と等しいか判定
            ans++; // 等しい場合は答えに 1 加算
        }
    }
    cout << ans << endl;
}
