#include <iostream>
using namespace std;

int main() {
    int H, W; cin >> H >> W;
    int h, w; cin >> h >> w;
    cout << (H - h) * (W - w) << endl;
    return 0;
}
