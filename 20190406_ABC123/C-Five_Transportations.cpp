#include <iostream>
using namespace std;

int main() {
    unsigned int N, A, B, C, D, E;
    cin >> N;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    cin >> E;
    unsigned int transport[5] = {A, B, C, D, E}, min = A;
    for (int i = 1; i < 5; i++) {
        if (transport[i] < min) {
            min = transport[i];
        }
        else {}
    }
    cout << N / min + 5 << endl;
    return 0;
}
