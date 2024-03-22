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
    int b,c; cin >> b>> c;
    v.erase(v.begin()+(b-1), v.begin()+(c-1));
    vector <int> :: iterator it;
    cout << v.size() << endl;
    for ( auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}