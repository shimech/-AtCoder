#include <iostream>
#include <vector>
using namespace std;

const long MOD = 1e9 + 7;

int main() {
    int N, M; cin >> N >> M;
    vector<bool> ok_step(N+1, true);
    int a;
    for (int i = 0; i < M; i++) {
        cin >> a;
        ok_step[a] = false;
    }
    vector<long> dp(N+1, 0);
    dp[0] = 1;
    for (int n = 1; n <= N; n++) {
        if (ok_step[n]) {
            if (n == 1) dp[n] = 1;
            else dp[n] = (dp[n-1] + dp[n-2]) % MOD;
            if (dp[n] == 0) {
                dp[N] = 0;
                break;
            }
        }
    }
    cout << dp[N] << endl;
    return 0;
}
