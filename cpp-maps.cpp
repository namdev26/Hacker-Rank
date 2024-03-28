#include <bits/stdc++.h>
using namespace std;

map <string, int> m;
pair <string, int> p;

void nhap(pair <string,int> p){
    m[p.first] += p.second;
}

void xoa (pair <string,int> p){
    m.erase(p.first);
}

void in(pair <string, int> p){
    cout << m[p.first] << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if (n ==1){
            cin >> p.first >> p.second; nhap(p);
        }
        else if (n==2){
            cin >> p.first ; 
            p.second=0;
            xoa(p);
        }
        else if (n==3){
            cin >> p.first ;
            p.second =0;
            in(p);
        }
    }
}