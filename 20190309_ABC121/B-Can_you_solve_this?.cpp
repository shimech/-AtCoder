#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, C; cin >> N >> M >> C;
    vector<int> A, B;
    int a_tmp, b_tmp;
    for (int i = 0; i < M; i++) {
        cin >> b_tmp;
        B.push_back(b_tmp);
    }
    for (int i = 0; i < N * M; i++) {
        cin >> a_tmp;
        A.push_back(a_tmp);
    }
    int count = 0, s, sum = 0;
    for (int i = 0; i < N; i++) {
        s = i * M;
        sum = 0;
        for (int j = 0; j < M; j++) {
            sum += A[s+j] * B[j];
        }
        sum += C;
        if (sum > 0) count++;
    }
    cout << count << endl;
    return 0;
}
