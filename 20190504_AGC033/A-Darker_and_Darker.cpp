#include <iostream>
#include <vector>
using namespace std;

bool is_change(int h, int w, int H, int W, string A);

int main() {
    int H, W; cin >> H >> W;
    string A, A_copy, a_tmp, ans(H*W, '#');
    for (int i = 0; i < H; i++) {
        cin >> a_tmp;
        A += a_tmp;
    }
    int i, start = 0;
    vector<int> index;
    while (i >= 0) {
        i = A.find(".", start);
        if (i >= 0) index.push_back(i);
        start = i+1;
    }
    int count = 0, n, h, w;
    while (A != ans) {
        A_copy = A;
        for (int i = 0; i < index.size(); i++) {
            n = index[i];
            h = n / W;
            w = n % W;
            if (is_change(h, w, H, W, A_copy)) A.replace(n, 1, "#");
        }
        count++;
    }
    cout << count << endl;
    return 0;
}

bool is_change(int h, int w, int H, int W, string A) {
    if (h == 0) {
        if (w == 0) {
            return A[(h+1)*W+w] == '#' || A[h*W+w+1] == '#';
        }
        else if (w == W-1) {
            return A[(h+1)*W+w] == '#' || A[h*W+w-1] == '#';
        }
        else {
            return A[(h+1)*W+w] == '#' || A[h*W+w-1] == '#' || A[h*W+w+1] == '#';
        }
    }
    else if (h == H-1) {
        if (w == 0) {
            return A[(h-1)*W+w] == '#' || A[h*W+w+1] == '#';
        }
        else if (w == W-1) {
            return A[(h-1)*W+w] == '#' || A[h*W+w-1] == '#';
        }
        else {
            return A[(h-1)*W+w] == '#' || A[h*W+w-1] == '#' || A[h*W+w+1] == '#';
        }
    }
    else {
        if (w == 0) {
            return A[(h-1)*W+w] == '#' || A[h*W+w+1] == '#' || A[(h+1)*W+w] == '#';
        }
        else if (w == W-1) {
            return A[(h-1)*W+w] == '#' || A[h*W+w-1] == '#' || A[(h+1)*W+w] == '#';
        }
        else {
            return A[(h-1)*W+w] == '#' || A[h*W+w-1] == '#' || A[h*W+w+1] == '#' || A[(h+1)*W+w] == '#';
        }
    }
}
