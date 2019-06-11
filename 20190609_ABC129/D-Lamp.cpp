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
    int L[H][W], R[H][W], U[H][W], D[H][W];
    int ans = 0;
    int h_l, w_l, h_r, w_r, h_u, w_u, h_d, w_d;
    for (int i = 0; i < H * W; i++) {
        h_l = i / W; w_l = i % W;
        h_r = i / W; w_r = W-1 - i % W;
        h_u = i % H; w_u = i / H;
        h_d = H-1 - i % H; w_d = i / H;
        if (grid[h_l][w_l] == '#') L[h_l][w_l] = 0;
        else if (w_l == 0) L[h_l][w_l] = 1;
        else L[h_l][w_l] = L[h_l][w_l-1] + 1;

        if (grid[h_r][w_r] == '#') R[h_r][w_r] = 0;
        else if (w_r == W-1) R[h_r][w_r] = 1;
        else R[h_r][w_r] = R[h_r][w_r+1] + 1;

        if (grid[h_u][w_u] == '#') U[h_u][w_u] = 0;
        else if (h_u == 0) U[h_u][w_u] = 1;
        else U[h_u][w_u] = U[h_u-1][w_u] + 1;

        if (grid[h_d][w_d] == '#') D[h_d][w_d] = 0;
        else if (h_d == H-1) D[h_d][w_d] = 1;
        else D[h_d][w_d] = D[h_d+1][w_d] + 1;
    }
    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) {
            ans = max(ans, L[h][w] + R[h][w] + U[h][w] + D[h][w] - 3);
        }
    }
    cout << ans << endl;
    return 0;
}
