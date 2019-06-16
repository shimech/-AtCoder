#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    long K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int s = 0, t = 0;
    long sum_val = A[0];
    long ans = 0;
    while (s <= N - 1) {
        if (sum_val >= K && t == N-1) {
            ans++;
            sum_val -= A[s];
            s++;
        }
        else if (sum_val < K && t == N-1) {
            break;
        }
        else if (sum_val >= K && t < N-1) {
            ans += N - t;
            sum_val -= A[s];
            if (s == t) {
                t++;
                sum_val += A[t];
            }
            s++;
        }
        else {
            t++;
            sum_val += A[t];
        }
    }
    cout << ans << endl;
    return 0;
}
