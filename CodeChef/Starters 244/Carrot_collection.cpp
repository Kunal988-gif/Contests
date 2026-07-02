#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, l , r;
        cin >> n >> l >> r;
        
        l = l-1;
        r = r-1;
        
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        int ans1 = 0;
        int ans2 = 0;
        
        if(l == 0){
            for(int i = r+1; i < n; i++){
            ans1 += a[i];
            }
            cout << ans1 << endl;
            
        }
        else if (r == n-1){
            for(int i = 0; i < l;i++){
                ans1 += a[i];
            }
            cout << ans1 << endl;
        }else{
            for(int i =0; i < l;i++){
                ans1 += a[i];
            }
            for(int i = r+1 ; i < n;i++){
                ans2 += a[i];
            }
            cout << max(ans1, ans2) <<endl;
        }
    }
    return 0;
}
