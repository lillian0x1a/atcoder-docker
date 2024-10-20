#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, a;
    cin >> n >> t >> a;
    int m = n/2 + 1;
    if (m <= t || m <= a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
