#include <iostream>
#include <vector>
using namespace std;

const long MOD = 1e9 + 7;

vector<vector<long long>> comb(int n, int r) {
    vector<vector<long long>> v(n+1, vector<long long>(n+1, 0));
    for (int i = 0; i < v.size(); i++) {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for (int j = 1; j < v.size(); j++) {
        for (int k = 1; k < j; k++) {
            v[j][k] = v[j-1][k-1] + v[j-1][k];
        }
    }
    return v;
}

int main() {
    int N, K; cin >> N >> K;
    vector<vector<long long>> comb_left = comb(K-1, K-1), comb_right = comb(N-K+1, K);
    for (int i = 1; i <= K; i++) {
        if (N-K+1 < i) cout << 0 << endl;
        else cout << (comb_left[K-1][i-1] * comb_right[N-K+1][i]) % MOD << endl;
    }
    return 0;
}
