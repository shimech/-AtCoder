#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, Q;
  cin >> N;
  vector<vector<int> > score(N + 1, vector<int>(2));
  int c, p;
  for (int n = 0; n < N; n++) {
    cin >> c >> p;
    c--;
    score.at(n + 1).at(c) = score.at(n).at(c) + p;
    score.at(n + 1).at(1 - c) = score.at(n).at(1 - c);
  }
  cin >> Q;
  vector<int> L(Q), R(Q);
  for (int q = 0; q < Q; q++) {
    cin >> L.at(q) >> R.at(q);
  }
  for (int q = 0; q < Q; q++) {
    int l = L.at(q), r = R.at(q);
    cout << score.at(r).at(0) - score.at(l - 1).at(0) << ' '
         << score.at(r).at(1) - score.at(l - 1).at(1) << endl;
  }
}
