#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int H, W; cin >> H >> W;
    vector<string> grid(H);
    for (int h = 0; h < H; h++) {
        cin >> grid[h];
    }
    vector<int> dx{1, 0, -1, 0}, dy{0, 1, 0, -1};
    int count = 1, ans = 0;
    int ref_x, ref_y;
    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) {
            if (grid[h][w] == '#') {
                count = 0;
            }
            else {
                count = 1;
                for (int i = 0; i < 4; i++) {
                    ref_x = h + dx[i];
                    ref_y = w + dy[i];
                    while (true) {
                        if (ref_x >= 0 && ref_x < H && ref_y >= 0 && ref_y < W) {
                            if (grid[ref_x][ref_y] == '.') {
                                count++;
                                if (i == 0) ref_x++;
                                else if (i == 1) ref_y++;
                                else if (i == 2) ref_x--;
                                else ref_y--;
                            }
                            else break;
                        }
                        else break;
                    }
                }
            }
            ans = max(ans, count);
        }
    }
    cout << ans << endl;
    return 0;
}
