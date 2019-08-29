#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int A;
    float sum_val = 0;
    for (int i = 0; i < N; i++) {
        cin >> A;
        sum_val += (float)1.0 / A;
    }
    cout << (float)1.0 / sum_val << endl;
    return 0;
}
