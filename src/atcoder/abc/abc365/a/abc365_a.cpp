#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;
    int a;
    if(y % 400 == 0){
        a = 366;
    }else if (y % 100 == 0){
        a = 365;
    }else if(y % 4 == 0){
        a = 366;
    }else{
        a = 365;
    }
    cout << a << endl;
}
