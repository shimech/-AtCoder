#include <iostream>
using namespace std;

int count_AC(string S, int l, int r);

int main() {
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    int l[Q], r[Q];
    for (int i = 0; i < Q; i++) {
        cin >> l[i] >> r[i];
    }
    int count;
    for (int i = 0; i < Q; i++) {
        count = count_AC(S, l[i], r[i]);
        cout << count << endl;
    }
    return 0;
}

int count_AC(string S, int l, int r) {
    int count = 0;
    bool is_find_A = false;
    for (int i = l-1; i < r; i++) {
        if (is_find_A) {
            if (S[i] == 'C') {
                count++;
            }
            is_find_A = false;
        }
        else {
            if (S[i] == 'A') {
                is_find_A = true;
            }
            else {}
        }
    }
    return count;
}
