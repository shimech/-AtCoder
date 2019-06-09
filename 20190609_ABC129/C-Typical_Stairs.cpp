#include <iostream>
using namespace std;

long factorial(long n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

long comb(long n, long r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    const long MOD = 1000000007;
    long N, M; cin >> N >> M;
    long a_begin = -1, a_end, ans = 1, cand, num_stair;
    for (int i = 0; i < M; i++) {
        cin >> a_end;
        num_stair = a_end - a_begin - 1;
        cand = 0;
        if (a_end == 1) {
            cand = 1;
        }
        else if (num_stair == 0) {
            ans *= 0;
        }
        else if (num_stair % 2 == 0) {
            for (long y = 0; y <= num_stair / 2 - 1; y++) {
                long x = num_stair - 1 - 2 * y;
                cand += comb(x + y, y);
            }
        }
        else {
            for (long y = 0; y <= (num_stair - 1) / 2; y++) {
                long x = num_stair - 1 - 2 * y;
                cand += comb(x + y, y);
            }
        }
        ans %= MOD;
        ans *= (cand % MOD);
        a_begin = a_end;
    }
    a_end = N + 1;
    num_stair = a_end - a_begin - 1;
    cand = 0;
    if (num_stair == 0) {
        ans *= 0;
    }
    else if (num_stair % 2 == 0) {
        for (long y = 0; y <= num_stair / 2 - 1; y++) {
            long x = num_stair - 1 - 2 * y;
            cand += comb(x + y, y);
        }
    }
    else {
        for (long y = 0; y <= (num_stair - 1) / 2; y++) {
            long x = num_stair - 1 - 2 * y;
            cand += comb(x + y, y);
        }
    }
    ans %= MOD;
    ans *= (cand % MOD);
    cout << ans % MOD << endl;
    return 0;
}
