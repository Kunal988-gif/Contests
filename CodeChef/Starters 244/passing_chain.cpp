#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        
        int n, k;
        cin >> n >> k;
        
       int ans = 1;
       
       while(ans + k <= n) ans = ans + k;
       
        cout << ans << endl;
    }
	return 0;
}
