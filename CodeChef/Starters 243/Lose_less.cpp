#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long M, N;
        cin >> M >> N;


        if (N <= M) {
            cout << M - N << "\n";
        }

        else {
            cout << (N - M) % 2 << "\n";
        }
    }
    return 0;
}
