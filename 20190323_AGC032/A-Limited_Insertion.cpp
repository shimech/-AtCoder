#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    int b_tmp;
    vector<int> b;
    for (int i = 0; i < N; i++) {
        cin >> b_tmp;
        b.push_back(b_tmp);
    }
    vector<int> operate;
    bool is_continue = true, is_erase = false;
    while (is_continue) {
        is_erase = false;
        for (int i = b.size()-1; i >= 0; i--) {
            if (i+1 == b[i]) {
                operate.push_back(b[i]);
                b.erase(b.begin() + i);
                is_erase = true;
                break;
            }
        }
        if (b.size() == 0) is_continue = false;
        else if (is_erase == false) is_continue = false;
    }
    if (is_erase == false) cout << -1 << endl;
    else {
        for (int i = operate.size()-1; i >= 0; i--) {
            cout << operate[i] << endl;
        }
    }
    return 0;
}
