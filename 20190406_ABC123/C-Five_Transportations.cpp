#include <iostream>
using namespace std;

int main() {
    long N, A, B, C, D, E;
    cin >> N;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    cin >> E;
    long transport[5] = {A, B, C, D, E}, min = A;
    for (int i = 1; i < 5; i++) {
        if (transport[i] < min) {
            min = transport[i];
        }
        else {}
    }
    long t;
    if (N % min == 0) {
        t = N / min + 4;
    }
    else {
        t = N / min + 5;
    }
    cout << t << endl;
    return 0;
}
