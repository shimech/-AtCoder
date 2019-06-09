def main():
    N = int(input())
    W = list(map(int, input().split()))
    diff = float('inf')
    for i in range(1, N):
        S1 = sum(W[:i])
        S2 = sum(W[i:])
        if diff > abs(S2 - S1):
            diff = abs(S2 - S1)
    print(diff)
    return


if __name__ == '__main__':
    main()
