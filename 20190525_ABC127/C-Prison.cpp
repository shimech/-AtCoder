#include <iostream>
#include <list>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    int L, R;
    list<int> ok, erase;
    list<int>::iterator it;
    for (int i = 0; i < M; i++) {
        cin >> L >> R;
        if (i == 0) {
            for (int c = L; c <= R; c++) {
                ok.push_back(c);
            }
        }
        else {
            list<int> cp(ok.size());
            copy(ok.begin(), ok.end(), cp.begin());
            for (it = cp.begin(); it != cp.end(); it++) {
                if (*it >= L && *it <= R) {}
                else {ok.remove(*it);}
            }
        }
    }
    cout << ok.size() << endl;
}
