#include <iostream>
using namespace std;

bool is_ACGT(char s);

int main() {
    string S;
    cin >> S;
    int count, max = 0;
    for (int i = 0; i < S.length(); i++) {
        if (is_ACGT(S[i])) {
            count++;
            if (count > max) {
                max = count;
            }
            else {}
        }
        else {
            count = 0;
        }
    }
    cout << max << endl;
    return 0;
}

bool is_ACGT(char s) {
    if (s == 'A' || s == 'C' || s == 'G' || s == 'T') {
        return true;
    }
    else {
        return false;
    }
}
