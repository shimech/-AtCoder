#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> T(N);
  for (int n = 0; n < N; n++) {
    cin >> T.at(n);
  }
  sort(T.begin(), T.end());
  vector<int> O(2);
  for (int n = 0; n < N; n++) {
    if (n == 0) {
      O.at(0) = T.at(n);
    } else {
      if (O.at(0) <= O.at(1)) {
        O.at(0) += T.at(n);
      } else {
        O.at(1) += T.at(n);
      }
    }
  }
  cout << max(O.at(0), O.at(1)) << endl;
}
