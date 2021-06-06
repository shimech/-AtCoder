#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int> > graph(N, vector<int>(N));
  int a, b;
  for (int m = 0; m < M; m++) {
    cin >> a >> b;
    graph.at(a - 1).at(b - 1) = 1;
  }
  int answer = N;
  int now;
  for (int n = 0; n < N; n++) {
    queue<int> que;
    vector<int> isAchieved(N);
    isAchieved.at(n) = 1;
    que.push(n);
    while (!que.empty()) {
      now = que.front();
      for (int n_ = 0; n_ < N; n_++) {
        if (n_ != now && graph.at(now).at(n_) == 1 && isAchieved.at(n_) != 1) {
          que.push(n_);
          isAchieved.at(n_) = 1;
          graph.at(now).at(n_) = 1;
          answer++;
        }
      }
      que.pop();
    }
  }
  cout << answer << endl;
}
