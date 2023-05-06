#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 2e5 + 5;

int n, k;
int p[N];

bool check() {
    for (int i = 0; i < n; i++) {
        if (p[i] != i + 1) {
            int j = min(n-1, i+k);
            for (; j > i; j--) {
                if (p[j] == i+1) {
                    break;
                }
            }
            if ((i-1)/k != (j-1)/k) {
                return false;
            }
            while (i < j) {
                swap(p[i], p[j]);
                i += k;
                j -= k;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        bool sorted = check();
        if (sorted) {
            cout << 0 << endl;
            continue;
        }

        // Try one single swap
        for (int i = 0; i < n; i++) {
            if (p[i] == i+1) continue;

            int num_pos = (p[i] - 1) / k;
            int target_pos = num_pos * k;
            if (abs(i - target_pos) % k == 0 && abs(i - target_pos) != k) {
                swap(p[i], p[target_pos]);
                if (check()) {
                    cout << 1 << endl;
                } else {
                    cout << -1 << endl;
                }
                break;
            } else {
                cout << -1 << endl;
                break;
            }
        }
    }
    return 0;
}