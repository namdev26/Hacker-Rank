#include <bits/stdc++.h>
using namespace std;

int max1 (int a, int b){
    if (a>b){
        return a;
    }
    return b;
}

int main (){
    int a , b , c ,d;
    cin >> a >> b >> c >> d;
    int m = max1 (max1 (a,b),max1 (c,d));
    cout << m;
}