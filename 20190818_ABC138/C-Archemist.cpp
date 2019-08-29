#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> V(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }
    sort(V.begin(), V.end(), greater<int>());
    float sum_val = 0;
    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            sum_val += pow(0.5, N-1) * V[i];
        } else {
            sum_val += pow(0.5, i+1) * V[i];
        }
    }
    cout << sum_val << endl;
    return 0;
}