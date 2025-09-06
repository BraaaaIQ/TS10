#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (fopen ("CAU1.INP", "r")) {
        freopen ("CAU1.INP", "r", stdin);
        freopen ("CAU1.OUT", "w", stdout);
    }
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int A = a / x;
    int B = a / y;
    int C = b / x;
    int D = b / y;
    if (a % x == 0 && a % y != 0) {
        cout << A + min(C,D) << endl;
    }
    else if (a % y == 0 && a % x != 0) {
        cout << B + min(C,D) << endl;
    }
    else {
        cout << min (A,B) + min(C,D) << endl;
    }
    return 0;
}
