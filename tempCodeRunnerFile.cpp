#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v;
    for ( int i =0; i <n; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    int a;cin >> a;
    v.erase(v.begin()+(a-1));
    for ( auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    int b,c; cin >> b>> c;
    v.erase(v.begin()+(b-1), v.begin()+(c-1));
    vector <int> :: iterator it;
    for ( auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}