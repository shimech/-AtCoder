#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;

struct Task {
    int A;
    int B;
};

bool operator<(const Task& left, const Task& right) {
    return left.B < right.B;
}

int main() {
    int N; cin >> N;
    vector<Task> T(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i].A >> T[i].B;
    }
    sort(T.begin(), T.end());
    long sum_val = 0;
    for (int i = 0; i < N; i++) {
        sum_val += T[i].A;
        if (sum_val > T[i].B) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
