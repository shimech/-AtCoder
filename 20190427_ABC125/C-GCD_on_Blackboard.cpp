#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
    int N; cin >> N;
    int A[N]; for (int i = 0; i < N; i++) cin >> A[i];
    int left[N], right[N], max_gcd = 0;
    left[0] = 0; right[N-1] = 0;
    for (int i = 1; i < N; i++) {
        left[i] = gcd(left[i-1], A[i-1]);
        right[N-i-1] = gcd(right[N-i], A[N-i]);
    }
    for (int i = 0; i < N; i++) {
        max_gcd = max(max_gcd, gcd(left[i], right[i]));
    }
    cout << max_gcd << endl;
}

int gcd(int a, int b) {
    if (a < b) swap(a, b);
    if (b == 0) return a;
    int r = a % b;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
