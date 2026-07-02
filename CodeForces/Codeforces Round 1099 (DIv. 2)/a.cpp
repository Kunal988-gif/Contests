#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        int x = n;
 
        for(int i  = 1; i <= 2*n; i++){
            if(i % 2 != 0 && x > 0){
                cout << i << " ";
                x--;
            }
        }
        cout << endl;
    }
    return 0;
}
