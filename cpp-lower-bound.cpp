#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++){
        cin >> a[i];
    }
    int t;
    cin >> t;
    while (t--){
        int q; cin >> q;
        auto it = lower_bound(a, a+n, q);
        if (it != a+n ){
            cout << "Yes " << it - a + 1<< endl;
        }
        else cout << "No " << it - a + 1<< endl;
    }
}