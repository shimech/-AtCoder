#include <iostream>
#include <vector>
using namespace std;
const int MAX_N = 2000;
bool isAchieved[MAX_N];
vector<vector<int> > G;

void dfs(int v) {
  if (isAchieved[v]) return;
  isAchieved[v] = true;
  for (int vv : G[v]) {
    dfs(vv);
  }
}

int main() {
  int N, M;
  cin >> N >> M;
  G.resize(N);
  int a, b;
  for (int m = 0; m < M; m++) {
    cin >> a >> b;
    G[a - 1].push_back(b - 1);
  }
  int answer = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) isAchieved[j] = false;
    dfs(i);
    for (int j = 0; j < N; j++)
      if (isAchieved[j]) answer++;
  }
  cout << answer << endl;
}
