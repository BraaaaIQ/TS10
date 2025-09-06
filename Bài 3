#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (fopen ("CAU3.INP", "r")) {
        freopen ("CAU3.INP", "r", stdin);
        freopen ("CAU3.OUT", "w", stdout);
    }
    int n,g;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> g;
    for (int i = 0; i < g; i++) {
        int u;
        cin >> u;
        int s = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] >= u) {
                s += arr[j];
            }
        }
        cout << s << endl;
    }
    return 0;
}
