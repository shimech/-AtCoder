#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N;
    cin >> S;
    cin >> K;
    for (int i = 0; i < N; i++) {
        if (S[i] == S[K-1]) {}
        else {
            S.replace(i, i+1, "*");
        }
    }
    cout << S << endl;
    return 0;
}
