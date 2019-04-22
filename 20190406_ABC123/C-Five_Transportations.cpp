#include <iostream>
using namespace std;

int main() {
    long int N, A, B, C, D, E;
    cin >> N;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    cin >> E;
    int city[N];
    for (int i = 0; i < N; i++) {
        city[i] = 1;
    }
    long int a, b, c, d, e, t = 0, approach;
    bool is_continue = true;
    while (is_continue) {
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        e = 0;
        approach = 0;
        for (int i = 0; i < N; i++) {
            if (city[i] == 1) {
                if (a < A) {
                    city[i]++;
                    a++;
                }
                else {}
            }
            else if (city[i] == 2) {
                if (b < B) {
                    city[i]++;
                    b++;
                }
                else {}
            }
            else if (city[i] == 3) {
                if (c < C) {
                    city[i]++;
                    c++;
                }
                else {}
            }
            else if (city[i] == 4) {
                if (d < D) {
                    city[i]++;
                    d++;
                }
                else {}
            }
            else if (city[i] == 5) {
                if (e < E) {
                    city[i]++;
                    e++;
                }
                else {}
            }
            else {}
        }
        t++;
        for (int i = 0; i < N; i++) {
            if (city[i] == 6) {
                approach++;
            }
            else {}
        }
        if (approach == N) {
            cout << t << endl;
            is_continue = false;
        }
        else {}
    }
    return 0;
}
