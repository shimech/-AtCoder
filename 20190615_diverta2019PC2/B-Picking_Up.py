from itertools import combinations


def main():
    N = int(input())
    x = []
    y = []
    for _ in range(N):
        x_n, y_n = map(int, input().split())
        x.append(x_n)
        y.append(y_n)
    if N == 1:
        print(1)
        return
    comb = list(combinations([i for i in range(N)], 2))
    dic = {}
    for c in comb:
        i, j = c[0], c[1]
        dx = x[j] - x[i]
        dy = y[j] - y[i]
        if not (dx, dy) in dic.keys():
            dic[(dx, dy)] = 0
        if not (-dx, -dy) in dic.keys():
            dic[(-dx, -dy)] = 0
        dic[(dx, dy)] += 1
        dic[(-dx, -dy)] += 1
    dic_sorted = sorted(dic.items(), key=lambda x:x[1])[::-1]
    print(N - dic_sorted[0][1])
    return


if __name__ == '__main__':
    main()
