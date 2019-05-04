#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

struct A_Info {
    int index;
    long val;

    A_Info(int input_index, long input_val) {
        index = input_index;
        val = input_val;
    }
    bool operator<(const A_Info &another) const
    {
        return val < another.val;
    };
};

int main() {
    int N, M; cin >> N >> M;
    vector<A_Info> A;
    vector<long> B;
    long a_tmp, b_tmp;
    for (int i = 0; i < N; i++) {
        cin >> a_tmp >> b_tmp;
        A.push_back(A_Info(i, a_tmp));
        B.push_back(b_tmp);
    }
    sort(A.begin(), A.end());
    int m = 0, index;
    long sum = 0;
    for (int i = 0; m < M; i++) {
        index = A[i].index;
        if (m + B[index] > M) {
            sum += A[i].val * (M - m);
            m = M;
        }
        else {
            sum += A[i].val * B[index];
            m += B[index];
        }
    }
    cout << sum << endl;
    return 0;
}
