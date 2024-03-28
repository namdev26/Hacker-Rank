#include <bits/stdc++.h>
using namespace std;
set <int> s;

int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int q; cin >> q;
        if ( n ==1){
            s.insert(q);
        }
        else if (n==2){
            auto it = s.find(q);
            if (it != s.end()){
                s.erase(q);
            }
        }
        else if (n==3){
            auto it = s.find(q);
            if (it != s.end()){
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }
    }
}