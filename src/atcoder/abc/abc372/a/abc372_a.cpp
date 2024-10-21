#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, a;
    cin >> s;
    int ss = s.size();
    for (int i = 0;i < ss; i++){
        if(! (s[i] == '.')){
            a += s[i];
        }
    }
    cout << a << endl;
}
