#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int T[N];
  int S = 0;
  for (int n = 0; n < N; n++) {
    cin >> T[n];
    S += T[n];
  }
  bool dp[N + 1][S + 1];
  for (int n = 0; n < N + 1; n++) {
    for (int s = 0; s < S + 1; s++) {
      dp[n][s] = (s == 0);
    }
  }
  for (int n = 0; n < N; n++) {
    for (int s = 0; s < S + 1; s++) {
      dp[n + 1][s] = (dp[n + 1][s] || dp[n][s - T[n]]) && s >= T[n];
      dp[n + 1][s] = dp[n + 1][s] || dp[n][s];
    }
  }
  for (int s = 0; s < S + 1; s++) {
    if (dp[N][s] && s >= ceil(S / 2.0)) {
      cout << s << endl;
      return 0;
    }
  }
}
