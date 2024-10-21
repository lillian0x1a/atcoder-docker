#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, q;
    cin >> a >> b;
    if(a == b) q = 1;
    else if((a + b) % 2 == 1) q = 2;
    else q = 3;
    cout << q << endl;
}
