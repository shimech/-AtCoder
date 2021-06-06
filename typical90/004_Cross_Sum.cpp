#include <iostream>
#include <vector>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int> > A(H, vector<int>(W));
  vector<int> sumH(H), sumW(W);
  int a;
  for (int h = 0; h < H; h++) {
    for (int w = 0; w < W; w++) {
      cin >> a;
      A.at(h).at(w) = a;
      sumH.at(h) += a;
      sumW.at(w) += a;
    }
  }
  for (int h = 0; h < H; h++) {
    for (int w = 0; w < W; w++) {
      cout << sumH.at(h) + sumW.at(w) - A.at(h).at(w) << ' ';
    }
    cout << endl;
  }
}
