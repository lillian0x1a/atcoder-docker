#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, g, b;
    string c;
    int a;
    cin >> r >> g >> b >> c;
    if(c == "Red"){
        if(g <= b){
            a = g;
        }else{
            a = b;
        }
    }else if(c == "Green"){
        if(r <= b){
            a = r;
        }else{
            a = b;
        }
    }else{
        if(g <= r){
            a = g;
        }else{
            a = r;
        }
    }
    cout << a << endl;
}
