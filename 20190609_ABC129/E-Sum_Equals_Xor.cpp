#include <iostream>
#include <string>
#include <vector>
using namespace std;

const long MOD = 1e9 + 7;

int main() {
    string L; cin >> L;
    vector<long> dp_un(L.length()), dp_le(L.length());
    dp_un[0] = 2; dp_le[0] = 1;
    for (int i = 1; i < L.length(); i++) {
        if (L[i] == '0') {
            dp_un[i] = dp_un[i-1] % MOD;
            dp_le[i] = (3 * dp_le[i-1]) % MOD;
        }
        else {
            dp_un[i] = (2 * dp_un[i-1]) % MOD;
            dp_le[i] = (3 * dp_le[i-1] + dp_un[i-1]) % MOD;
        }
    }
    cout << (dp_un[L.length()-1] + dp_le[L.length()-1]) % MOD << endl;
    return 0;
}
