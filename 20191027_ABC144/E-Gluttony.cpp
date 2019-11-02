#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool is_success_training(long long K, long long sum_before, long long target_time, vector<long long> A, vector<long long> F) {
    long long sum_after = 0;
    for (long long i = 0; i < A.size(); i++) {
        sum_after += min(A[i], target_time / F[i]);
    }
    return sum_before - sum_after <= K;
}

int main() {
    long long N, K; cin >> N >> K;
    vector<long long> A(N), F(N);
    long long sum_before = 0;
    for (long long i = 0; i < N; i++) {
        cin >> A[i];
        sum_before += A[i];
    }
    for (long long i = 0; i < N; i++) {
        cin >> F[i];
    }
    sort(A.begin(), A.end());
    sort(F.begin(), F.end(), greater<long long>());
    long long left = -1, right = pow(10, 12), center;
    while (left + 1 < right) {
        center = (left + right) / 2;
        if (is_success_training(K, sum_before, center, A, F)) {
            right = center;
        } else {
            left = center;
        }
    }
    cout << right << endl;
    return 0;
}
