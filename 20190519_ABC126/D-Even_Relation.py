def main():
    N = int(input())
    distance = [-1 for _ in range(N)]
    edges = [[] for _ in range(N)]
    nodes = [0]
    for _ in range(N-1):
        u, v, w = map(int, input().split())
        edges[u-1].append((v-1, w))
        edges[v-1].append((u-1, w))
    distance[0] = 0
    while any(d < 0 for d in distance):
        n = nodes.pop(0)
        for edge in edges[n]:
            m, d = edge[0], edge[1]
            if distance[m] == -1:
                distance[m] = distance[n] + d
                nodes.append(m)
    for d in distance:
        print(0 if d % 2 == 0 else 1)


if __name__ == '__main__':
    main()
