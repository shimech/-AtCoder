#include <iostream>
using namespace std;

int num_change(string S, int border, int N);

int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;
    int num, min;
    for (int i = 0; i < N+1; i++) {
        num = num_change(S, i, N);
        if (i == 0) {
            min = num;
        }
        else {
            if (num < min) {
                min = num;
            }
        }
    }
    cout << min << endl;
    return 0;
}

int num_change(string S, int border, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (i < border) {
            if (S[i] == '#') {
                count++;
            }
        }
        else {
            if (S[i] == '.') {
                count++;
            }
        }
    }
    return count;
}
