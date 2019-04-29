#include <iostream>
#include <vector>
using namespace std;

int return_index(int k, int max_idx);

int main() {
    int N, K; cin >> N >> K;
    string S; cin >> S;
    vector<int> index_change;
    index_change.push_back(0);
    for (int i = 1; i < N; i++) {
        if (S[i] != S[i-1]) index_change.push_back(i);
    }
    int idx, idx_c = index_change.size(), num, max_continue = 0;
    index_change.push_back(N);
    for (int i = 0; i < idx_c ; i++) {
        idx = index_change.at(i);
        if (S[idx] == '0') num = index_change.at(return_index(i+2*K, idx_c-1)) - idx;
        else num = index_change.at(return_index(i+2*K+1, idx_c-1)) - idx;
        max_continue = max(max_continue, num);
    }
    cout << max_continue << endl;
    return 0;
}

int return_index(int k, int max_idx) {
    if (k > max_idx) return max_idx+1;
    else return k;
}
