#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int answer = 0;
  int a;
  for (int n = 0; n < N; n++) {
    cin >> a;
    answer += max(a - 10, 0);
  }
  cout << answer << endl;
}
