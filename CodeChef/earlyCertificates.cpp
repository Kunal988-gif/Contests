#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        string a, b;

        cin >> a;
        cin >> b;

         int len = min(n, m);

        int x = 0;

        for(int i = 0; i < len; i++) {

            if (a[i] != b[i]) break;
            else 
            x++;
        }

      
       cout << a.substr(0, x) <<  endl;

    }
    return 0;
}