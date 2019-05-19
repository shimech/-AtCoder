from operator import itemgetter
import numpy as np

def main():
    N = int(input())
    color = [-1] * N
    comb = [[] for i in range(N)]
    for _ in range(N-1):
        u, v, w = map(int, input().split())
        if w % 2 != 0:
            comb[u-1].append(v-1)
            comb[v-1].append(u-1)
    length = np.array(list(map(len, comb)))
    index = np.argsort(length)[::-1]
    for n in index:
        node = comb[n]
        if color[n] == -1:
            color[n] = 0
        if len(node) > 0:
            for m in node:
                color[m] = 1 - color[n]
    for c in color:
        print(c)


if __name__ == '__main__':
    main()
