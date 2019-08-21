#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    int N, Q; cin >> N >> Q;
    vector<vector<int>> tree(N);
    vector<bool> visited(N, false);
    int a, b;
    for (int i = 0; i < N-1; i++) {
        cin >> a >> b;
        tree[a-1].push_back(b-1);
        tree[b-1].push_back(a-1);
    }
    vector<int> flow(N, 0);
    int p, x;
    for (int i = 0; i < Q; i++) {
        cin >> p >> x;
        flow[p-1] += x;
    }
    stack<int> visit_nodes;
    visit_nodes.push(0);
    int i_cur;
    while (!visit_nodes.empty()) {
        i_cur = visit_nodes.top();
        visit_nodes.pop();
        visited[i_cur] = true;
        for (const auto& child : tree[i_cur]) {
            if (!visited[child]) {
                flow[child] += flow[i_cur];
                visit_nodes.push(child);
            }
        }
    }
    for (const auto& f : flow) {
        cout << f << ' ';
    }
    cout << endl;
    return 0;
}
