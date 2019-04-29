#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;
    int left_black = 0, right_white = count(S.begin(), S.end(), '.'), min_change = left_black + right_white;
    for (int i = 0; i < N; i++) {
        if (S[i] == '#') left_black++;
        else right_white--;
        min_change = min(min_change, left_black + right_white);
    }
    cout << min_change << endl;
    return 0;
}
