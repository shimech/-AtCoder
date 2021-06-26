#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> A, int B);
int calc_distance(vector<int> A, int lb, int B);

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  sort(A.begin(), A.end());
  int Q;
  cin >> Q;
  int B, ans, lb;
  for (int j = 0; j < Q; j++) {
    cin >> B;
    lb = binary_search(A, B);
    ans = calc_distance(A, lb, B);
    cout << ans << endl;
  }
}

int binary_search(vector<int> A, int B) {
  int ub = A.size(), lb = 0, mid;
  for (int i = 0; i < (int)A.size(); i++) {
    if (ub - lb <= 1) {
      break;
    }

    mid = (ub + lb) / 2;
    if (B >= A.at(mid)) {
      lb = mid;
    } else {
      ub = mid;
    }
  }
  return lb;
}

int calc_distance(vector<int> A, int lb, int B) {
  if (lb == (int)A.size()) {
    return abs(B - A.at(lb - 1));
  } else if (lb == (int)A.size() - 1) {
    return abs(B - A.at(lb));
  } else {
    return min(abs(B - A.at(lb)), abs(B - A.at(lb + 1)));
  }
}
