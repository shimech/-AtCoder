#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
    int N; cin >> N;
    int A[N]; for (int i = 0; i < N; i++) cin >> A[i];
    int left, right, max_gcd = 0;
    for (int n = 0; n < N; n++) {
        left = 0;
        right = 0;
        for (int i = 0; i < n; i++) left = gcd(left, A[i]);
        for (int i = N-1; i > n; i--) right = gcd(right, A[i]);
        max_gcd = max(max_gcd, gcd(left, right));
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
