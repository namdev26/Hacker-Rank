#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) { // Bắt đầu từ i = 0
        cin >> a[i];
    }
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;
        auto it = lower_bound(a, a + n, q); // Loại bỏ +1 từ chỉ số mảng
        if (it != a + n) { // Không cần kiểm tra giá trị của *it == q
            cout << "Yes " << it - a + 1 << endl; // Điều chỉnh chỉ số bằng cách thêm 1
        } else {
            cout << "No " << it - a + 1 << endl; // Điều chỉnh chỉ số bằng cách thêm 1
        }
    }
    return 0;
}
